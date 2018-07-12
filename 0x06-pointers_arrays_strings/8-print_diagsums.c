#include "holberton.h"
#include "stdio.h"

/**
 * print_diagsums - function with two arguments
 * @a: int type pointer
 * @size: int type argument
 *
 * Description: prints the sum of the two diagonal
 * Return: value
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum;

	for (i = 0; i < size; i++)
		for (j = 0; j < size; j++)
		{
			*(a + i) = (size + 1) * i;
			printf(");
		}
}
