#include<stdio.h>
/**
* main - sizeof type
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char n1;

	int n2;

	long  int n3;

	long long n4;

	float n5;

	printf("Size of a char:%d byte(s)\n", (unsigned long)sizeof(n1));
	printf("Size of a int:%d byte(s)\n", (unsigned long)sizeof(n2));
	printf("Size of a long int:%d byte(s)\n", (unsigned long)sizeof(n3));
	printf("Size of a long long int:%d byte(s)\n", (unsigned long)sizeof(n4));
	printf("Size of a float:%d byte(s)\n", (unsigned long)sizeof(n5));
	return (0);
}
