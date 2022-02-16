#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - create node to a tree
 *
 * @parent: pointer to a parent node
 * @value: value of the node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_insert = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = NULL;

	if (!left_insert || !parent)
		return (NULL);
	left_insert->n = value;
	left_insert->left = NULL;
	left_insert->right = NULL;
	left_insert->parent = parent;
	if (parent->left == NULL)
		parent->left = left_insert;
	else
	{
		temp = parent->left;
		parent->left = left_insert;
		left_insert->left = binary_tree_node(left_insert, temp->n);
	}
	return (left_insert);
}
