#include "binary_trees.h"

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

	size_t depth = 0;

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
