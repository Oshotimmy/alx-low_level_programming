#include "main.h"

/**
 *_strcat - concatenates the string pointed to by src
 *the end of the string pointed to by dest
 *@dest: appended string
 *@src: concatenated string 
 *
 * Return: returns to @dest
 */

char *_Strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;
	
	while (desk[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
