#include "main.h"

/**
  * rot13 - encodes a string using rot13
  * @c: pointer to string parameter
  *
  * Return: string
  */
char *rot13(char *c)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (c[i] == data1[j])
			{
				c[i] = datarot[j];
				break;
			}
		}
	}
	return (c);
}
