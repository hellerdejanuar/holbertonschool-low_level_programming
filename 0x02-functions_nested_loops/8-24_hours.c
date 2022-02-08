#include "main.h"

/**
 * jack_bauer - prints all numbers from 00:00 to 23:59 in sequence
 */

void jack_bauer(void)
{
	char hx;
	char xh;
	char mx;
	char xm;

	for (hx = '0'; hx <= '2'; hx++)
	{
		for (xh = '0'; xh <= '3'; xh++)
		{
			for (mx = '0'; mx <= '5'; mx++)
			{
				for (xm = '0'; xm <= '9'; xm++)
				{
					_putchar(hx);
					_putchar(xh);
					_putchar(':');
					_putchar(mx);
					_putchar(xm);
					_putchar('\n');
				}
			}
		}

	}
}
