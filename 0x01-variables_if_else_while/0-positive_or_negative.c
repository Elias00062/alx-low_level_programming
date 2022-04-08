#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main function block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int a, b;
	a=b=0;
	for (a=0; a<=9; a++)
	{
	for (b=0; b<=9; b++)
	{
	putchar(a);
	putchar(b);
	if((a!=9)|| (a==9 && b!=9))
	{
	putchar(' , ');
	putchar(' , ');

	}
	}
	}
putchar('\n');
putchar('\n');
return(0);
}
