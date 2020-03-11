#include "binary_trees.h"

/**
 * binary_tree_delete - delete all tree
 * @tree: pointer to point to a tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
