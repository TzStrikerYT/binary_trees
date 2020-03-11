#include "binary_trees.h"

/**
 *
 *
 *
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree = malloc(sizeof(binary_tree_t));

	if (!tree)
		return(NULL);

	tree->parent = parent;
	tree->n = value;

	return (tree);
}
