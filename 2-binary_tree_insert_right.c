#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node to the right of the parent
 * @parent: pointer to point a node of tree
 * @value: integer value to set in the tree position
 * Return: Return a binary tree/ NULL in case of failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = NULL;

	if (!parent)
		return (NULL);

	tree = malloc(sizeof(binary_tree_t));

	if (!tree)
		return (NULL);

	tree->parent = parent;
	tree->left = NULL;
	tree->right = NULL;
	tree->n = value;

	if (parent->right)
	{
		tree->right = parent->right;
		parent->right->parent = tree;
	}
	parent->right = tree;

	return (tree);
}
