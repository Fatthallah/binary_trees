#include "binary_trees.h"
#include "limits.h"

/**
 * binary_tree_is_bst - The Definition I've to write to pass.
 * @tree: The Definition I've to write to pass.
 *
 * Return: The Definition I've to write to pass.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}

/**
 * is_bst_helper - The Definition I've to write to pass.
 * @tree: The Definition I've to write to pass.
 * @lo: The Definition I've to write to pass.
 * @hi: The Definition I've to write to pass.
 *
 * Return: The Definition I've to write to pass.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}