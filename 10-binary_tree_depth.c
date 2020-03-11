#include "binary_trees.h"

/**
 * binary_tree_depth - insert a node to the left of the parent
 * @tree: pointer to point a head of the tree
 * Return: value of depth of the measure
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (!tree)
		return (0);

	while (tree)
	{
		tree = tree->parent;
		counter++;
	}

	return (--counter);
}
