#include "main.h"

/**
 * palindromeChecker - checks the string
 *
 * @str: string
 * @len: string length
 * @i: incrementor, begins from 0
 *
 * Return: 1 for palindrome, 0 not palindrome
 */

int palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}

/**
 * _strlen_recursion - shows the length of a string
 *
 * @s: string
 *
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 for palindrome, 2 for not palindrome
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (palindromeChecker(s, length, i));
}
