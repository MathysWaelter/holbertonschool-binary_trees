#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if tree is full and balanced
 * @tree: tree
 * 
 * Return: 1 if full 0 if not 
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_full(tree) && !binary_tree_balance(tree))
		{
			return (1);
		}

	return (0);
}
