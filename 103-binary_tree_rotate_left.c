#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: it points to the root node of the tree to rotate.
 *
 * Return: it  points to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_pivot, *tmp;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	new_pivot = tree->right;
	tmp = new_pivot->left;
	new_pivot->left = tree;
	tree->right = tmp;
	if (tmp != NULL)
		tmp->parent = tree;
	tmp = tree->parent;
	tree->parent = new_pivot;
	new_pivot->parent = tmp;
	if (tmp != NULL)
	{
		if (tmp->left == tree)
			tmp->left = new_pivot;
		else
			tmp->right = new_pivot;
	}

	return (new_pivot);
}
