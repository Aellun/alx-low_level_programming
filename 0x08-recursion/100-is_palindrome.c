#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)/* if the string is empty its considered  a palindrome*/
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));/* Calls the recursive function to check for palindrome*/
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')/* return 0 if the ens of the string is reached*/
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)/*  If characters at both ends don't match, it's not a palindrome*/
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)/*If the iterator surpasses or equals the length, it's a palindrome*/
		return (1);
	return (check_pal(s, i + 1, len - 1));/* Recursively call the function, moving the iterator and endpoints inward*/
}

