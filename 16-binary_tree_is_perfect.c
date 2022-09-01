#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of binary tree
 * @tree: binary tree
 * Return: Max
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t w = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		l = binary_tree_height(tree->left);
		l++;
	}

	if (tree->right)
	{
		w = binary_tree_height(tree->right);
		w++;
	}

	if (l >= w)
		return (l);
	else
		return (w);
}

/**
 * binary_tree_balance - measure the balance factor
 * @tree: pointer of binary tree
 * Return: balance factor of a node
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t w = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		l = binary_tree_height(tree->left);
		l++;
	}

	if (tree->right)
	{
		w = binary_tree_height(tree->right);
		w++;
	}

		return (l - w);
}

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

/**
 * binary_tree_depth - measure the depth of binary tree
 * @tree: binary tree
 * Return: the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t l = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
	{
		l = binary_tree_depth(tree->parent);
		l++;
	}

	return (l);

}


/**
 * binary_tree_size - measures the size of tree
 * @tree: binary tree
 * Return: Size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}

/**
 * _pow_recursion - recursion
 * @x: x
 * @y: y
 *
 * Return: integer
 */

size_t _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
if (x == 1 || y == 0)
	return (1);
if (x == 0)
	return (0);
return (x * _pow_recursion(x, (y - 1)));
}

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

	if (binary_tree_is_full(tree) && !binary_tree_balance(tree) && binary_tree_size(tree) == _pow_recursion(2, binary_tree_height(tree) - 1))
		{
			return (1);
		}

	return (0);
}
