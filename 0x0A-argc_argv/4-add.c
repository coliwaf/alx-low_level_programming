#include <stdio.h>
#include <stdlib.h>

/**
 * main - add two positive numbers
 * @argc: number of args
 * @argv: arr of args
 * Return: 0 on success or 1 on error
 */
int main(int argc, char *argv[])
{
	int sum, numb, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		numb = atoi(argv[k]);
		if (numb >= 0)
			sum += numb;
	}

	printf("%d\n", sum);
	return (0);
}
