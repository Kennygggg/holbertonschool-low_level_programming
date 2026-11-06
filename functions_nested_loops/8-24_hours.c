#include "main.h"

/**
 * jack_bauer - This will _putchar, aka print every minute in a day.
 *
 * return:
 */

void jack_bauer(void)
{
	int minute01;
	int hour50;

	hour50 = 0;

	while (hour50 <= 23)
	{
		minute01 = 0;

		while (minute01 <= 59)
		{
			_putchar('0' + hour50 / 10);
			_putchar('0' + hour50 % 10);
			_putchar(':');

			_putchar('0' + minute01 / 10);
			_putchar('0' + minute01 % 10);
			_putchar('\n');
			minute01 = minute01 + 1;
		}
		hour50 = hour50 + 1;
	}
}
