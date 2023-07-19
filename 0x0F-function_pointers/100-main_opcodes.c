#include <stdio.h>
#include <stdlib.h>

/**
* main - Prints its own opcodes.
* @argc: Number of arguments.
* @argv: Array of arguments.
* Return: Always 0 (Success).
*/
int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	/*Check if the number of arguments is not equal to 2*/
	if (argc != 2)
	{
		printf("Error\n");
		exit(1); /*Exit the program with exit code 1 to indicate an error*/
	}

	/*Convert the argument (number of bytes) to an integer*/
	bytes = atoi(argv[1]);

	/*Check if the number of bytes is negative*/
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2); /*Exit the program with exit code 2 to indicate an error*/
	}

	/*Convert the 'main' function address to a character pointer*/
	arr = (char *)main;

	/*Loop through the memory locations of the 'main' function*/
	for (i = 0; i < bytes; i++)
	{
		/*Check if it's the last byte to print*/
		if (i == bytes - 1)
		{
			/*Print the hexadecimal opcode of the last byte*/
			printf("%02hhx\n", arr[i]);
			break; /* Exit the loop. */
		}
		/*Print the hexadecimal opcode of the current byte with a space*/
		printf("%02hhx ", arr[i]);
	}

	return (0); /* Return 0 to indicate successful program execution. */
}

