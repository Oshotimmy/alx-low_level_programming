<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * * main -Prints a text according number
 * * Return: Always (Success)
 */

int main(void)
{    
	int n,
=======
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always zero (success)
 */
int main(void)
{
	int n, m;

>>>>>>> 3c15061eb9fdfd96ceff2c282ad4e905d516a86c
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
<<<<<<< HEAD
	printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, m);
=======
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
>>>>>>> 3c15061eb9fdfd96ceff2c282ad4e905d516a86c
	}
	return (0);
}
