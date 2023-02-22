# include "main.h"
/**
* print_sign-check the sign of a number.
*
* @n:Number whose sign is to be checked.
* 
* Return: Always 0
*
*/


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);}
	else if (n < 0)
	{
		_putchar ('-');
		return (0);}
	else
	{
		_putchar('0');
		return (0);
	}
}
