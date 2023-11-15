#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @len: position
 * Return: boolena
 */

int p1(char *s, int len)
{
	if (len < 1)
	{
		return (1);
	}

	if (*s == *(s + len))
	{
		return (p1(s + 1, len - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int lenght = _strlen_recursion(s);

	return (p1(s, lenght - 1));
}
