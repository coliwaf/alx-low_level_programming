#include <stdio.h>

/**
 * main - prints all arguments passed to it
 * @argc: number of args
 * @argv: arr of args
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}