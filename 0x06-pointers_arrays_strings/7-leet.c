#include "main.h"

/**
 * leet - encodes a string 1337
 * @str: string to be encoded.
 *
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'0', 'l', '?', 'E', 'A', '?', '?', 'T'};

	while (srt[index1])
	{
			for (index2 = ; index2 <= 7; index2++)
		{
				if  (str[index1] == leet[index2] ||
				str[index1] - 32 == leet[index2])
					str[index1] = index2 + '0';
		}
		index1++;
	}
}

