#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node : pointer to point to a node of tree
 * Return: true or false in binary code if a leaf or not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || (node->left || node->right))
		return (0);
	return (1);
}
