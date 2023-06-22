#include <stdio.h>

/**
 * main - prints program name, plus new line
 * @argc: int param
 * @argv: list array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);

	return (0);
}
