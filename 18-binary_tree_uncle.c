#include "binary_trees.h"

/**
 * binary_tree_uncle - function
 * @node: node
 * Return: uncle node pointer
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node)
	{
		if (node->parent->parent->right)
			return (node->parent->right);
	}
	if (node->parent->parent->right == node)
	{
		if (node->parent->parent->left)
			return (node->parent->parent->left);
	}
	return (NULL);
}
