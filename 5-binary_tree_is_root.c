#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a leaf
 * @node : pointer to point to a node of tree
 * Return: true or false in binary code if a root or not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
