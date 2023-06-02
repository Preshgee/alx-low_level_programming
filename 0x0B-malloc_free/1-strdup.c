#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates the string
 * @str: string to duplicate
 *
 * Return: a pointer to duplicated string and NULL if insufficient memory.
 */
char *_strdup(char *str)
{
	char *w;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	w = malloc((len + 1) * sizeof(char));

	if (w == NULL)
		return (NULL);

	while ((w[i] = str[i]) != '\0')
	i++;

	return (w);
}
