#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: tree to measure the height of
 *
 * Return: height of the tree
 *         0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t lh = 0;
	size_t rh = 0;

	lh = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rh = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (lh > rh ? lh : rh);
}
