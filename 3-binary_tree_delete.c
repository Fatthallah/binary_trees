#include "binary_trees.h"

/**
 * binary_tree_delete - The Defination I've to write to pass.
 * @tree: The Defination I've to write to pass.
 */
 
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
