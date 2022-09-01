#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor
 * @tree: pointer of binary tree
 * Return: balance factor of a node
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0;
	int w = 0;
	int bal = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		l += binary_tree_balance(tree->left);
		l++;
	}

	if (tree->right)
	{
		w += binary_tree_balance(tree->right);
		w++;
	}

	bal = l - w;

	return (bal);
}
