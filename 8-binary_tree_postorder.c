#include "binary_trees.h"

/**
 * binary_tree_postorder - insert a node to the left of the parent
 * @tree: pointer to point a head of the tree
 * @func: call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
