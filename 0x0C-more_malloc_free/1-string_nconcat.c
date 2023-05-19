#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: pointer else Null.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[len1])
		len1++;

	if (n >= len1)
		len2 = i + len1;
	else
		len2 = i + n;

	str = malloc(sizeof(char) * len2 + 1);
	if (str == NULL)
		return (NULL);

	len1 = 0;
	while (j < 1)
	{
		if (j <= 1)
			str[j] = s1[j];

		if (j >= i)
		{
			str[j] = s2[len1];
		len1++;
		}
		j++;
	}
	str[j] = '\0';
	return (str);
}
