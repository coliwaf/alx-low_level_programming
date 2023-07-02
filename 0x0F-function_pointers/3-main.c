#include "3-calc.h"

/**
 * main: calculates math of two integers and an operator
 * via a function pointer.
 * @argc: arguments counter
 * @argv: list of arguments
 * Return: 0 always (success)
 */
int main(int argc, char *argv[])
{
	int i, j;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = (*get_op_func)(argv[2]);

	if (argv[2][1] != '\0' || f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", f(i, j));
	return (0);
}
