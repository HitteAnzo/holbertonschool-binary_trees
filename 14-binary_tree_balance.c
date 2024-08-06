#include "binary_trees.h"

/**
 * binary_tree_balance - measure balance of binary tree
 *
 *@tree: pointer root node to measure
 *
 *Return: balance factor or NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	if (tree == NULL)
		return (0);

	lh = (tree->left != NULL) ? (int)binary_tree_height(tree->left) : -1;
	rh = (tree->right != NULL) ? (int)binary_tree_height(tree->right) : -1;

	return (lh - rh);
}
