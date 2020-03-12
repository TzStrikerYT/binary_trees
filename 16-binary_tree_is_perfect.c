#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - displays 1 if a binary tree is perfect,
 * 0 in othercase
 * @tree: pointer to point a head of the tree
 * Return: 1 if tree is perfect 0 in othercase
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (binary_tree_height(tree->right)
	    == binary_tree_height(tree->left))
		return (binary_tree_is_perfect(tree->right)
			&& binary_tree_is_perfect(tree->left));
	return (0);
}
