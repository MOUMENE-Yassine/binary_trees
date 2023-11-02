#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child.
 * @p: binary_tree_t
 * @n: int
 * Return: new node or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *p, int n)
{
	binary_tree_t *new;

	if (!p)
		return (NULL);
	new = binary_tree_node(p, n);
	if (!new)
		return (NULL);
	if (p->left)
		new->left = p->left, p->left->parent = new;

	p->left = new;
	return (new);
}
