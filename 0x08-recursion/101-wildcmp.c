#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 0
 */

int wildcmp(char *s1, char *s2)
{
/*Base case: if s1 is empty*/
	if (*s1 == '\0')
	{
/* Check if s2 is empty or s2 contains only '*' and proceed accordingly*/
	return (*s2 == '\0' || (*s2 == '*' && wildcmp(s1, s2 + 1)));
	}

/*Check if the current character in s2 is '*'*/
	if (*s2 == '*')
	{
/* Recursive calls:*/
/* 1. Skip the current character in s1 and continue comparing with s*/
/*2. Skip the '*' in s2 and continue comparing with s1*/
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
/*Check if the current characters in s1 and s2 are equal*/
	else if (*s1 == *s2)
	{
/*Recursively call wildcmp with the next characters in s1 and s2*/
	return (wildcmp(s1 + 1, s2 + 1));
	}
/* If the characters are not equal and s2 doesn't contain '*',*/
/*then the strings are not equal*/
	return (0);
}

