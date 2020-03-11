#include "binary_trees.h"

/**
 * binary_tree_height - insert a node to the left of the parent
 * @tree: pointer to point a head of the tree
 * Return: value of heigth of the measure
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_counter = 0, r_counter = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		l_counter = binary_tree_height(tree->left);
		r_counter = binary_tree_height(tree->right);
		return (1 + (l_counter > r_counter ? l_counter : r_counter));
	}
	return (0);
}
