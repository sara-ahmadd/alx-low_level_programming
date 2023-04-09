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
	if (argc == 2)
	{
		int i, numberOfCoins = 0, value = atoi(argv[1]);
		int coins[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (value >= coins[i])
			{
				numberOfCoins += value / coins[i];
				value = value % coins[i];
				if (value % coins[i] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", numberOfCoins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
