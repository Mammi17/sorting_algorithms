#include <stdio.h>
#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: input arrray
 * @size: size of the array
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	qsort(array, 0, size - 1, size);
}
/**
 * _qsort - auxiliar function for the
 * quick_sort function
 * @array: input arrray
 * @low: index for the first element
 * @last: index for the last element
 * @size: size of the array
 * Return: void
 */

void qsort(int *array, int low, last, int size)
{
	int b, c, a;
	int point;

	if (low < high)
	{
		b = last;
		c = low;
		for (a = low; a < last; a++)
		{
			if (array[a] < array[b])
			{
				if (a != c)
				{
					point = array[a];
					array[a] = array[c];
					array[c] = point;
					print_array(array, size);
				}
				c++;
			}
		}
		if (c != b && array[c] != array[b])
		{
			point = array[c];
			array[c] = array[b];
			array[b] = point;
			print_array(array, size);
		}
		qsort(array, low, c - 1, size);
		qsort(array, c + 1, last, size);
	}
}
