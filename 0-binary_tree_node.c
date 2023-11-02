#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @p: binary_tree_t
 * @n: int
 * Return: new node or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *p, int n)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->n = n, new->parent = p;
	new->left = NULL, new->right = NULL;
	return (new);
}
