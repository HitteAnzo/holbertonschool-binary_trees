#include "binary_trees.h"

/**
 * binary_tree_preorder - going through tree with pre-order traversal
 *
 *@tree: pointer to the root of tree who we want to traverse
 *@func: function call for node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
