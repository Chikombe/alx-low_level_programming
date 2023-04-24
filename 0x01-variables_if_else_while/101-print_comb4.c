#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: ) success, non zero fail
 */
int main(void)
{
	int m, i, j;

	for (int i = '0'; i <= '9'; i++)
	{
		for (int j = '0'; j <= '9'; j++)
		{
			for (int m = '0'; m <= '9'; m++)
			{
				if (i < j && j < m)
				{
					putchar(i);
					putchar(j);
					putchar(m);
					if (i == '7' && j == '8' && m == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

				return (0);
}
