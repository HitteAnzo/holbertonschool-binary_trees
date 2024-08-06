#include "binary_trees.h"

/**
 * binary_tree_postorder - going through tree with post-order traversal
 *
 *@tree: pointer to the root of tree who we want to traverse
 *@func: pointer function call for node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
