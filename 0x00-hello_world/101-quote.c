#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 *  * main - main block
 *   * Return: 1
 */
int main(void)
{
		int s = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");

			write(2,
						      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
						      	      s);
				return (1);
}

Task 8b 
#include <unistd.h>
/**
 *  * main - Entry
 *   *
 *    * Return: 1
 */
int main(void)
{
		char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

			write(2, str1, 59);
				return (1);
}
