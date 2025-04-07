#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with
 * at least 1 child in a binary tree
 * @tree: tree to check
 * Return: size of a node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	size = binary_tree_nodes(tree->left) + 1;

	size += binary_tree_nodes(tree->right);

	return (size);
}
