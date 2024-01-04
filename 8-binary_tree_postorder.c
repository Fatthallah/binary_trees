#include "binary_trees.h"

/**
 * binary_tree_postorder - The Defination I've to write to pass.
 * @tree: The Defination I've to write to pass.
 * @func: The Defination I've to write to pass.
 */
 
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
