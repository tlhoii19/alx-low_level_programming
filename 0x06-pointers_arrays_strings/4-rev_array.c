#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: the array of integer to be reversed
 * @n: the number of elements in the arrays
 */

void reverse_array(int *a, int n)

{

	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
	}

}
