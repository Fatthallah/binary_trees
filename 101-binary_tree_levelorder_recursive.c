#include "binary_trees.h"

/**
 * struct node_s - The Definition I've to write to pass.
 * @node: The Definition I've to write to pass.
 * @next: The Definition I've to write to pass.
 */
typedef struct node_s
{
	const binary_tree_t *node;
	struct node_s *next;
} ll;

ll *append(ll *head, const binary_tree_t *btnode);
void free_list(ll *head);
ll *get_children(ll *head, const binary_tree_t *parent);
void levels_rec(ll *head, void (*func)(int));

/**
 * free_list - The Definition I've to write to pass.
 * @head: The Definition I've to write to pass.
 */
void free_list(ll *head)
{
	ll *ptr = NULL;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

/**
 * append - The Definition I've to write to pass.
 * @head: The Definition I've to write to pass.
 * @btnode: The Definition I've to write to pass.
 * Return: The Definition I've to write to pass.
 */
ll *append(ll *head, const binary_tree_t *btnode)
{
	ll *new = NULL, *last = NULL;

	new = malloc(sizeof(*new));
	if (new)
	{
		new->node = btnode;
		new->next = NULL;
		if (!head)
			head = new;
		else
		{
			last = head;
			while (last->next)
				last = last->next;
			last->next = new;
		}
	}
	return (head);
}

/**
 * get_children - The Definition I've to write to pass.
 * @head: The Definition I've to write to pass.
 * @parent: The Definition I've to write to pass.
 * Return: The Definition I've to write to pass.
 */
ll *get_children(ll *head, const binary_tree_t *parent)
{
	if (parent->left)
		head = append(head, parent->left);
	if (parent->right)
		head = append(head, parent->right);
	return (head);
}

/**
 * levels_rec - The Definition I've to write to pass.
 * @head: The Definition I've to write to pass.
 * @func: The Definition I've to write to pass.
 */
void levels_rec(ll *head, void (*func)(int))
{
	ll *children = NULL, *curr = NULL;

	if (!head)
		return;
	for (curr = head; curr != NULL; curr = curr->next)
	{
		func(curr->node->n);
		children = get_children(children, curr->node);
	}
	levels_rec(children, func);
	free_list(children);
}

/**
 * binary_tree_levelorder - The Definition I've to write to pass.
 * @tree: The Definition I've to write to pass.
 * @func: The Definition I've to write to pass.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	ll *children = NULL;

	func(tree->n);
	children = get_children(children, tree);
	levels_rec(children, func);

	free_list(children);
}