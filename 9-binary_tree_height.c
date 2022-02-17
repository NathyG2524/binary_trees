#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * max - find maximum
 *
 * @a: value to be compared
 * @b: second value to be compared
 *
 * Return: maximum value
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
	{
		return (a);
	}
	return (b);
}

/**
 * binary_tree_height - a function that measures the height of a binary tree
 *
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of a tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	return (1 + max(binary_tree_height(tree->left),
			binary_tree_height(tree->right)));
}
