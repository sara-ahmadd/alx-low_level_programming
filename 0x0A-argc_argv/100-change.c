#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entery point to program
 * @argc: count of arguments
 * @argv: array of pointers to arguments
 * Return: 0 (success) or non-zero value (failure)
 */

int main(int argc, char **argv)
{
	int i, numberOfCoins, result = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2 || argc > 2)
	{
		return (printf("Error\n"), 1);
	}
	else if (result < 0)
	{
		return (printf("%d\n", 0), 0);
	}
	else
	{
		for (i = 0; i < sizeof(coins) / sizeof(int); i++)
		{
			if (result > coins[i])
			{
				result -= coins[i];
				if (result > 0)
				{
					numberOfCoins++;
				}
				else
				{
					break;
				}
			}
		}
		return (printf("%d\n", numberOfCoins), 0);
	}
}
