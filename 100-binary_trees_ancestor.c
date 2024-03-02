#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: it points to the first node.
 * @second: it points to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *cuc, *tap;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	cuc = first->parent, tap = second->parent;
	if (first == tap || !cuc || (!cuc->parent && tap))
		return (binary_trees_ancestor(first, tap));
	else if (cuc == second || !tap || (!tap->parent && cuc))
		return (binary_trees_ancestor(cuc, second));
	return (binary_trees_ancestor(cuc, tap));
}
