#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as an argument.
 * Return: A pointer to the function corresponding
 * to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},/* Structure with "+" and its corresp function */
		{"-", op_sub}, /* Structure with "-" and its correspg function */
		{"*", op_mul}, /* Structure with "*" and its corresp function */
		{"/", op_div}, /* Structure with "/" and its corresp function*/
		{"%", op_mod}, /* Structure with "%" and its corresp function*/
		{NULL, NULL}, /* End of the array. */
	};

	int i = 0;

	/* Loop through the ops array until a matching operator is found. */
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	/* Return a pointer to the corresponding function or NULL if not found. */
	return (ops[i].f);
}
