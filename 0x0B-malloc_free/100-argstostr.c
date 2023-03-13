#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * argstostr - concatenates all arguments of program
  * @ac: arguments count
  * @av: arguments vector
  *
  * Return: pointer to a new string, or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c, i, j, ia;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}
	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			aout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			aout[ia] = av[i][j];
	}
	aout[ia] = '\0';

	return (aout);
}
