#include "binary_trees.h"

/**
 * binary_tree_insert_right - to insert a node as the right-child
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node (newn)
 * Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newn;

	if (parent == NULL)
		return (NULL);
	newn = binary_tree_node(NULL, value);
	if (newn == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		parent->right->parent = newn;
		newn->right = parent->right;
	}
	parent->right = newn;
	newn->parent = parent;
	return (newn);
}