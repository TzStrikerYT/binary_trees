#include "binary_trees.h"

/**
 * binary_tree_nodes - displays the size of a binary tree
 * @tree: pointer to point a head of the tree
 * Return: value of leaves in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		count++;
	if (tree->right)
		count += binary_tree_nodes(tree->right);
	if (tree->left)
		count += binary_tree_nodes(tree->left);
	return (count);

}
