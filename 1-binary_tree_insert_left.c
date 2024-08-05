#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a new node (newn) to the left of the tree.
 * @parent: parent node.
 * @value: value of the node.
 * Return: node created.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);

	newn = binary_tree_node(NULL, value);

	if (newn == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = newn;
		newn->left = parent->left;
	}
	parent->left = newn;
	newn->parent = parent;

	return (newn);
}
