#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node.
 *@parent: parent node.
 *@value: value of new node.
 *Return: new node or NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nn;

	nn = malloc(sizeof(binary_tree_t));

	if (nn == NULL)
		return (NULL);

	nn->n = value;
	nn->parent = parent;
	nn->left = NULL;
	nn->right = NULL;

	return (nn);
}
