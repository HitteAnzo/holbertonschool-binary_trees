#include "binary_trees.h"

/**
 * binary_tree_depth - take the size of node in binary tree
 *
 *@tree: pointer to node we need measure
 *
 *Return: depth of node or NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		d++;
	}

	return (d);
}
