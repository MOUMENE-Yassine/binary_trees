#include "binary_trees.h"

/**
 * sibling - function that finds the uncle of a node.
 *
 * @node: binary_tree_t node
 *
 * Return: binary_tree_t node
 */
binary_tree_t *sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
/**
 * binary_tree_uncle - function that finds the uncle of a node.
 *
 * @node: binary_tree_t node
 *
 * Return: binary_tree_t node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return (sibling(node->parent));
}
