#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *i;

	if (!parent)
		return (NULL);

	i = malloc(sizeof(binary_tree_t));

	if (!i)
		return (NULL);

	i->n = value;
	i->parent = parent;
	i->left = NULL;
	i->right = parent->right;
	parent->right = i;

	if (i->right)
		i->right->parent = i;
	 return(i);
}
