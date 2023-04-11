#include "main.h"
#include <stdlib.h>
/**
 * str_concat - returns a pointer to a newly allocated space.
 * @str: string.
 * @s1: storaged char
 * @s2: storaged char
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
        char *str;
        unsigned int i, j, k, l;

        if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
                s2 = "";

        for (i = 0; str[i] != '\0'; i++);

	for (j = 0; str[j] != '\0'; j++);

        str = (char *) malloc(sizeof(char) * (i + j + 1));

        if (str == NULL)
	{
		free(str);
                return (NULL);
	}
	for (k = 0; k <= i; k++)
                str[k] = s1[k];

	for (l = 0; l <= j; l++)
                str[l] = s2[l];

        return (str);
}
~                                                                                                              
~                             
