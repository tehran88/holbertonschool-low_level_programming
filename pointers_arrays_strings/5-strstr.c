#include "main.h"
#include <stdio.h>/**
 * _strstr - Locates a substring.
 * @haystack: The string to search in.
 * @needle: The substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *start_haystack;
	char *start_needle;
	if (*needle == '\0')
{
	return (haystack);
}
	while (*haystack)
{
	start_haystack = haystack;
	start_needle = needle;
	while (*haystack && *needle && *haystack == *needle)
{
		haystack++;
		needle++;
}
	if (*needle == '\0')
{
	return (start_haystack);
}
	haystack = start_haystack + 1;
	needle = start_needle;
}
	return (NULL);
}
