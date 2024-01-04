#include "binary_trees.h"

/**
 * binary_tree_depth - The Defination I've to write to pass.
 * @tree: The Defination I've to write to pass.
 * Return: Null or Number
 */
 
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
