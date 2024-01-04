#include "binary_trees.h"

/**
 * binary_tree_inorder - The Defination I've to write to pass.
 * @tree: The Defination I've to write to pass.
 * @func: The Defination I've to write to pass.
 */
 
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
