#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *i;
	i = malloc(sizeof(binary_tree_t));

	if (!i)
		return (NULL);

	i->n = value;
	i->parent = parent;
	i->right = NULL;
	i->left = parent->left;
	parent->left = i;

	if (i->left)
		i->left->parent = i;

	return (i);
}
