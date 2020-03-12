#include "binary_trees.h"

/**
 * binary_tree_leaves - displays the size of a binary tree
 * @tree: pointer to point a head of the tree
 * Return: value of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
