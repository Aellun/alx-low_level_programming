#!/usr/bin/python3

def island_perimeter(grid):
    """Calculates the island perimeter

    The grid represents water by 0 and land by 1.

    Args:
        grid (list of list of integers): Represents the island grid
    Returns:
        int: The island perimeter
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for h in range(height):
        for w in range(width):
            if grid[h][w] == 1:
                size += 1
                if (w > 0 and grid[h][w - 1] == 1):
                    edges += 1
                if (h > 0 and grid[h - 1][w] == 1):
                    edges += 1
    return size * 4 - edges * 2
