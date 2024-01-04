#include "binary_trees.h"

size_t depth(const binary_tree_t *tree);
unsigned char is_leaf(const binary_tree_t *node);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);



/**
 * get_leaf - The Comment I've to write to pass.
 * @tree: The Comment I've to write to pass.
 * Return: pointer.
 */
 
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}


/**
 * depth - The Comment I've to write to pass.
 * @tree: The Comment I've to write to pass.
 * Return: Node's Depth.
 */
 
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}



/**
 * binary_tree_is_perfect - The Comment I've to write to pass.
 * @tree: The Comment I've to write to pass.
 * Return: 0 or 1.
 */
 
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}


/**
 * is_perfect_recursive - The Comment I've to write to pass.
 * @tree: The Comment I've to write to pass.
 * @leaf_depth: The Comment I've to write to pass.
 * @level: The Comment I've to write to pass.
 * Return: 1 or 0.
 */
 
  
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}



/**
 * is_leaf - The Comment I've to write to pass.
 * @node: The Comment I've to write to pass.
 * Return: Leaf or 0.
 */
 
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}