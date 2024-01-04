#include "binary_trees.h"

/**
 * bst_search - The Definition I've to write to pass.
 * @tree: The Definition I've to write to pass.
 * @value: The Definition I've to write to pass.
 *
 * Return: The Definition I've to write to pass.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
		if (tree->n == value)
			return ((bst_t *)tree);
		if (tree->n > value)
			return (bst_search(tree->left, value));
		return (bst_search(tree->right, value));
	}
	return (NULL);
}
