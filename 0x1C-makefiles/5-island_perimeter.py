#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the island perimeter

    Args:
    - grid (list of list of integers): Represents the island grid.

    Returns:
    - int: The island perimeter
    """
    perimeter = 0

    if not grid or not grid[0]:
        return perimeter
    rows, cols = len(grid), len(grid[0])
    for w in range(rows):
        for h in range(cols):
            if grid[w][h] == 1:
                perimeter += 4
                if w > 0 and grid[w - 1][h] == 1:
                    perimeter -= 2
                if h > 0 and grid[w][h - 1] == 1:
                    perimeter -= 2

    return perimeter
