#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int firstDigit, seconDigit;

	for (firstDigit = 0; firstDigit <= 98; firstDigit++)
	{
		for (seconDigit = firstDigit + 1; seconDigit <= 99; seconDigit++)
		{
			putchar((firstDigit / 10) + '0');
			putchar((firstDigit % 10) + '0');
			putchar(' ');
				putchar((seconDigit / 10) + '0');
				putchar((seconDigit % 10) + '0');
				if (firstDigit == 98 && seconDigit == 99)
					continue;
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
