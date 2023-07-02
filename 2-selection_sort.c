#include "sort.h"
#include <stdio.h>
/**
 * selection_sort - sorts an array of integers in ascending 
 * order using the Selection sort algorithm
 * @array: input array of integers
 * @size: size of the array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int point;
	size_t a, b, c;

	a = 0;
	while (a < size)
	{
		c = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[c] > array[b])
				c = b;
		}
		if (a != c)
		{
			point = array[a];
			array[c] = array[c];
			array[c] = point;
			print_array(array, size);
		}
		a++;
	}
}
