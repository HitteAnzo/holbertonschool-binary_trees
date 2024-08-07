#include "binary_trees.h"

/**
 * binary_tree_uncle - find uncle of node
 *
 *@node: pointer node to find uncle
 *
 *Return: pointer to uncle or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p, *gp;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	p = node->parent;
	gp = p->parent;

	if (gp->left == p)
		return (gp->right);

	else
		return (gp->left);
}
