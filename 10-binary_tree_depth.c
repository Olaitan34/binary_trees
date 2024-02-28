#include "binary_tree.h"

/**
 * binary_tree_height - measures the depth of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t ld = 0;
	size_t rd = 0;

	ld = tree->left ? 1 + binary_tree_depth(tree->left) : 0;
	rd = tree->right ? 1 + binary_tree_depth(tree->right) : 0;

	return (ld > rd ? ld : rd);
}
