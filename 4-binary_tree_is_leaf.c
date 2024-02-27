#include "binary_trees.h"
/**
 * binary_tree_is_leaf - To check if the node is a leaf
 * @tree: tree to check
 * Return: 1 if node is a leaf
 *         0 if not a leaf
 *         0 if node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
