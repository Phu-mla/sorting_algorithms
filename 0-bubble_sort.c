#include "sort.h"

/**
 * swap_int - swaps two integers in an array
 * @num_1: first integer
 * @num_2: second integer
 */

void swap_int(int *num1, int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
 * bubble_sort - sort integers in ascending order
 * @array: array of integers to sort
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubble = false;

	if (array == NULL || size < 2)
		return;

	while (bubble == false)
	{
		bubble = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_int(array + i, array + i + 1);
				print_array(array, size);
				bubble = false;
			}
		}
		len --;
	}
}
