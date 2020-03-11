#include "binary_trees.h"

/**
 * binary_tree_size - displays the size of a binary tree
 * @tree: pointer to point a head of the tree
 * Return: value of depth of the measure
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	if (tree->right)
	{
		counter += binary_tree_size(tree->right);
	}
	if (tree->left)
	{
		counter += binary_tree_size(tree->left);
	}
	return (1 + counter);
}
