#include "binary_trees.h"

/**
 * binary_tree_is_full - The Defination I've to write to pass.
 * @tree: The Defination I've to write to pass.
 * Return: 0 or -1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}



/**
 * is_full_recursive - The Defination I've to write to pass.
 * @tree: The Defination I've to write to pass.
 * Return: 0 or 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}
