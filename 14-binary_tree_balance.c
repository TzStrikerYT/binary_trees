#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - displays the size of a binary tree
 * @tree: pointer to point a head of the tree
 * Return: value of leaves in the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int count_l, count_r, res;

	res = 0;
	if (!tree)
		return (0);

	count_r = binary_tree_height(tree->right);
	count_l = binary_tree_height(tree->left);
	res = count_l - count_r;
	res += tree->right ? 0 : 1;
	res -= tree->left ? 0 : 1;
	return (res);
}
