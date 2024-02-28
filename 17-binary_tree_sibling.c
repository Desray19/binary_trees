#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of the node
 * @node: it points to the node to find the sibling
 *
 * Return: If node is NULL then NULL else return  a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
