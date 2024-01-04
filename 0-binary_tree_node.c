#include "binary_trees.h"

/**
 * binary_tree_node - The Defination I've to write to pass.
 * @parent: The Defination I've to write to pass.
 * @value: The Defination I've to write to pass.
 * Return: Null or a pointer
 */
 
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
