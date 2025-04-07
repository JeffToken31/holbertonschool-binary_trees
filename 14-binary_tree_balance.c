#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree to measure
 * Return: balance factor
 */

size_t binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (-1);

	left = binary_tree_nodes(tree->left) + 1;

	right = binary_tree_nodes(tree->right) + 1;

	return (left - right);
}
