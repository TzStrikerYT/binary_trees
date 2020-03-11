#include "binary_trees.h"

/**
 * binary_tree_preorder - insert a node to the left of the parent
 * @tree: pointer to point a head of the tree
 * @func: call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
