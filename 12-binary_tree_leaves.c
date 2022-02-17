#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 *
 * @tree:  pointer to the root node of the tree
 *
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int lcount, rcount, leaves;

	if (tree == NULL)
	{
		return (0);
	}
	lcount = binary_tree_leaves(tree->left);
	rcount = binary_tree_leaves(tree->right);
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		leaves = lcount + rcount + 1;
		return (leaves);
	}
	leaves = lcount + rcount;
	return (leaves);
}
