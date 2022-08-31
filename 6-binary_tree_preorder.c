#include "binary_trees.h"

/**
 * binary_tree_preorder - function 
 * @free: tree
 * @func: pointer of function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree->right == NULL && tree->left == NULL)
		return;

	func = print_num;

	if (!tree->parent)
		print_num(tree->n);

	if (tree->left)
	{
		print_num(tree->left->n);
		binary_tree_preorder(tree->left, func);
	}
	if (tree->right)
	{
		print_num(tree->right->n);
		binary_tree_preorder(tree->right, func);
	}
}
