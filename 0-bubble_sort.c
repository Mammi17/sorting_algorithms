#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort- Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t  a = 0;
	int Val_array = 0, b = 1;

	if (array  == NULL)
		return;
	while (b == 1)
	{
		b = 0;
		for (a = 0; a < size - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				Val_array = array[a + 1];
				array[a + 1] = array[a];
				array[a] = Val_array;
				b = 1;
				print_array(array, size);
			}
		}
	}
}
