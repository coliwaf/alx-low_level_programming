#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make change for given money amount
 * @argc: numb of args
 * @argv: array of args
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int numb, i, res;
	int coins[] = {25, 10, 5, 2, 1};

	res = 0

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numb = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && numb >= 0; i++)
	{
		while (numb >= coins[j])
		{
			res++;
			numb -= coins[j];
		}
	}

	printf("%d\n", res);
	return (0);
}
