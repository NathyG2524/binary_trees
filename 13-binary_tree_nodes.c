#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes -  counts the nodes with at least 1 child
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int lcount, rcount, pnode;

	if (tree == NULL)
	{
		return (0);
	}
	lcount = binary_tree_nodes(tree->left);
	rcount = binary_tree_nodes(tree->right);
	if ((tree->left == NULL) && (tree->right == NULL))
	{
		return (0);
	}
	pnode = lcount + rcount + 1;
	return (pnode);
}
