#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_uncle - display the sibling of a node
 * @node: pointer to point a head of the tree
 * Return: The number storage in the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent == node->parent->parent->left)
			return (node->parent->parent->right);
		if (node->parent == node->parent->parent->right)
			return (node->parent->parent->left);
	}
	return (NULL);
}
