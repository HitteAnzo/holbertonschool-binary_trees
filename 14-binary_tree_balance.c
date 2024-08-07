/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_le = 0, count_ri = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count_le = binary_tree_height(tree->left);
	count_ri = binary_tree_height(tree->right);

	if (count_le >= count_ri)
		return (count_le + 1);
	else
		return (count_ri + 1);
}#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_le = 0, count_ri = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count_le = binary_tree_height(tree->left);
	count_ri = binary_tree_height(tree->right);

	if (count_le >= count_ri)
		return (count_le + 1);
	else
		return (count_ri + 1);
}

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
