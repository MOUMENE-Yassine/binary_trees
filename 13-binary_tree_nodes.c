#include "binary_trees.h"

/**
 * binary_tree_nodes -  function that counts the nodes.
 *
 * @tree: binary_tree_t node
 *
 * Return: 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);
	nodes = 0;
	if (tree->left || tree->right)
		nodes += 1;
	if (tree->left)
		nodes += binary_tree_nodes(tree->left);
	if (tree->right)
		nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
