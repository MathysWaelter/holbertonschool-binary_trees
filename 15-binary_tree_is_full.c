#include "binary_trees.h"

/**
 * binary_tree_is_full - check if binary tree is full
 * @tree: pointer of binary tree
 * Return: 1 if check or 0 if failed
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

		return (0);
}
