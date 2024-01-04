#include "binary_trees.h"

/**
 * binary_tree_preorder - The Defination I've to write to pass.
 * @tree: The Defination I've to write to pass.
 * @func: The Defination I've to write to pass.
 */
 
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
