#include "binary_trees.h"

/**
 * binary_tree_is_perfect - look if tree is perfect
 *
 *@tree: pointer root node to check
 *
 *Return: 1 if perfect or NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	if (!binary_tree_is_full(tree))
		return (0);

	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (lh == rh);
}
