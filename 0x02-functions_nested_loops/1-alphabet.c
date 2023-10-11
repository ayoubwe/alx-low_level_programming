#include "main.h"

/**
 * main - prints the alphabe
 */
void main (void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
