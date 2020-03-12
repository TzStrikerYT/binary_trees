#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_full - displays 1 if a binary tree is full, 0 in othercase
 * @tree: pointer to point a head of the tree
 * Return: 1 if tree is full 0 in othercase
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (0);
}
