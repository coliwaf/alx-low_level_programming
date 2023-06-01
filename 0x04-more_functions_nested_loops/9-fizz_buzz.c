#include <stdio.h>

/**
 * main - prints 1-100, for every multiple of 3 print Fizz instead,
 * multiple of 5 print Buzz, multiple of both 3 and 5 print FizzBuzz
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num == 100)
			printf("%d", num);
		else if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz");
		else if (num % 3 == 0)
			printf("Fizz");
		else if (num % 5 == 0)
			printf("Buzz");
		else
			printf("%d", num);
		printf(" ");
	}
	printf("\n");
	return (0);
}
