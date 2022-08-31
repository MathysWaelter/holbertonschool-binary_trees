#include "binary_trees.h"

/**
 * binary_tree_preorder - function
 * @tree: tree
 * @func: pointer of function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->right == NULL && tree->left == NULL)
	{
		return;
	}

	func = _func;

	if (!tree->parent)
	{
		_func(tree->n);
		return;
	}

	if (tree->left)
	{
		_func(tree->left->n);
		binary_tree_preorder(tree->left, func);
	}
	if (tree->right)
	{
		_func(tree->right->n);
		binary_tree_preorder(tree->right, func);
	}
}
