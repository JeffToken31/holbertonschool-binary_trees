#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the size of a binary tree
 * @tree: tree to check
 * Return: size of a node
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size = binary_tree_leaves(tree->left);

	size += binary_tree_leaves(tree->right);

	return (size);
}
