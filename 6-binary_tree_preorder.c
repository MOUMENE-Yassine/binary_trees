#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through a binary tree.
 *
 * @tree: binary_tree_t
 * @func: function pointer
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
