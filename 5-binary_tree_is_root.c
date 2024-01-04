#include "binary_trees.h"

/**
 * binary_tree_is_root - The Defination I've to write to pass.
 * @node: The Defination I've to write to pass.
 * Return: -1 or 0
 */
 
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
