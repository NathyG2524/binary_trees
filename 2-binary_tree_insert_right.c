#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - create node to the right of a tree
 *
 * @parent: pointer to a parent node
 * @value: value of the node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_right, *temp;

	insert_right = malloc(sizeof(binary_tree_t));
	if (insert_right != NULL)
	{
		insert_right->n = value;
		insert_right->parent = parent;
		insert_right->left = NULL;
		insert_right->right = NULL;
	}
	temp = parent->right;
	parent->right = insert_right;
	insert_right->right = temp;
	return (insert_right);
}
