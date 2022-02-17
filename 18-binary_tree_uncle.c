#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 *  binary_tree_uncle - function that finds the uncle of a node
 *
 * @node:  pointer to the node to find the uncle
 *
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *par, *grandpa;

	if (node == NULL)
	{
		return (NULL);
	}
	par = node->parent;
	grandpa = node->parent->parent;
	if ((par != NULL) && (grandpa != NULL))
	{
		if ((grandpa->left == NULL) || (grandpa->right == NULL))
		{
			return (NULL);
		}
		if (grandpa->left != par)
		{
			return (grandpa->left);
		}
		return (grandpa->right);
	}
	return (NULL);
}
