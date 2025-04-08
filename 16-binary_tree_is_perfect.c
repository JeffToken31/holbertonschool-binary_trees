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

/**
 * binary_tree_is_perfect - function to check if tree is perfect
 * @tree: tree to check
 * Return: 1 if perfect tree
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left != right)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));

	return (0);
}
