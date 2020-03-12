#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_sibling - display the sibling of a node
 * @node: pointer to point a head of the tree
 * Return: The number storage in the node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left && node == node->parent->left)
		return (node->parent->right);
	if (node->parent->right && node == node->parent->right)
		return (node->parent->left);
	return (NULL);
}
