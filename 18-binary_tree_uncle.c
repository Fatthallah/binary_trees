#include "binary_trees.h"

/**
 * binary_tree_uncle - The Defination I've to write to pass.
 * @node: The Defination I've to write to pass.
 * Return: Null or Not.
 */
 
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
