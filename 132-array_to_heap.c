#include "binary_trees.h"

/**
 * array_to_heap - The Definition I've to write to pass.
 * @array: The Definition I've to write to pass.
 * @size: The Definition I've to write to pass.
 *
 * Return: The Definition I've to write to pass.
 */
heap_t *array_to_heap(int *array, size_t size)
{
	unsigned int i;
	heap_t *root = NULL;

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);

	return (root);
}
