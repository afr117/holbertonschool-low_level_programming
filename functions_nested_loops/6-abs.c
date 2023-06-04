#include "main.h"
#include "5-sign.c"

/**
 * _abs - Compute the absolute value of an integer.
 *
 * @num: The input integer.
 *
 * Return: The absolute value of @num.
 */

int _abs(int num)
{
	if (num < 0)
	{
	return (-num);
	}
	else
	{
	return (num);
	}
}
