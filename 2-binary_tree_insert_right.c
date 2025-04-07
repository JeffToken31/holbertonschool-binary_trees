#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new node at  of parent
 * @parent: node parent
 * @value: value to integrate at ne node
 * Return: node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}

	parent->right = node;

	return (node);
}
