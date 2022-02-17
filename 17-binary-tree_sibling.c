#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 *
 * @node:  pointer to the node to find the sibling
 *
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *psibling;

	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}
	psibling = node->parent;
	if ((psibling->right != NULL) && (psibling->left != NULL))
	{
		if (psibling->right != node)
		{
			return (psibling->right);
		}
		return (psibling->left);
	}
	return (NULL);
}
