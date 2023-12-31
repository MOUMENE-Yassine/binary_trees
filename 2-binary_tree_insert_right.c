#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child.
 * @p: binary_tree_t
 * @n: int
 * Return: new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *p, int n)
{
	binary_tree_t *new;

	if (!p)
		return (NULL);
	new = binary_tree_node(p, n);
	if (!new)
		return (NULL);
	if (p->right)
		new->right = p->right, p->right->parent = new;
	p->right = new;
	return (new);
}
