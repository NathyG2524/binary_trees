#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create node to a tree
 *
 * @parent: pointer to a parent node
 * @value: value of the node
 *
 * Return: length of printed tree after process
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *result;
    result = malloc(sizeof(binary_tree_t));
    if (result == NULL)
    {
	    return (NULL);
    }
    result->left = NULL;
    result->right = NULL;
    result->n = value;
    result->parent = parent;
    return (result);
}
