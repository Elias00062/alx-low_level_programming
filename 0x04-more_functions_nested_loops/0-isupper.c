#include "main.h"
#include <stdio.h>
  2 /**
  3  * _isupper - Checks for uppercase character
  4  *
  5  * Description: Check character
  6  * @c: Character
  7  * Return: Integer
  8  *
  9  */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
