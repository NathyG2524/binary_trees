#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *  binary_tree_size - a function that measures the size of a binary tree
 *
 * @tree: pointer to a node
 *
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int lcount, rcount, size;

	if (tree == NULL)
	{
		return (0);
	}
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (1);
	}
	lcount = binary_tree_size(tree->left);
	rcount = binary_tree_size(tree->right);
	size = lcount + rcount + 1;
	return (size);
}
