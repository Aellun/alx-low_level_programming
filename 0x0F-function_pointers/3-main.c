#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* main - Prints the result of simple operations.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
* Return: Always 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	/* Variables to store the first and second numbers. */
	int num1, num2;
	/* Variable to store the operator. */
	char *op;

	/* Check if the number of arguments is not equal to 4. */
	if (argc != 4)
	{
		/* If the number of arguments is not correct,*/
		printf("Error\n");
		/* Exit the program with exit code 98, indicating an error. */
		exit(98);
	}
	/* Convert the first argument (operand 1) to an integer. */
	num1 = atoi(argv[1]);
	/* Get the operator as a string from the second argument. */
	op = argv[2];
	/* Convert the third argument (operand 2) to an integer. */
	num2 = atoi(argv[3]);
	/* Check if the operator is valid and has exactly one character. */
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		/* If the operator is invalid or has more than one character */
		printf("Error\n");
		/* Exit the program with exit code 99, indicating an error. */
		exit(99);
	}
	/* Check operator is division or modulo and the second operand is 0 */
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		/* If dividing by 0 or calculating modulo with 0 */
		printf("Error\n");
		/* Exit the program with exit code 100, indicating an error. */
		exit(100);
	}
	/*Call appropriate function based on operator and print result*/
	printf("%d\n", get_op_func(op)(num1, num2));

	/* Return 0 to indicate successful program execution. */
	return (0);
}

