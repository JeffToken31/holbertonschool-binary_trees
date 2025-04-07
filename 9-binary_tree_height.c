#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - calcul height of binary tree
 * @tree: tree to check
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (left > right)
		return (binary_tree_height(tree->left) + 1);

	else
		return (binary_tree_height(tree->right) + 1);

}
