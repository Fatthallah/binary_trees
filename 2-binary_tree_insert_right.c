#include "binary_trees.h"

/**
 * binary_tree_insert_right - The Defination I've to write to pass.
 * @parent: The Defination I've to write to pass.
 * @value: The Defination I've to write to pass.
 * Return: Null or a pointer
 */
 
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
