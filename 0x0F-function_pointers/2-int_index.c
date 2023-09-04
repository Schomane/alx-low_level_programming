#include "function_pointers.h"
<<<<<<< HEAD
=======
#include <stdio.h>

>>>>>>> e7efd92fd56c7c2dacd6a757c12ff51e27635c55
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
<<<<<<< HEAD

=======
>>>>>>> e7efd92fd56c7c2dacd6a757c12ff51e27635c55
