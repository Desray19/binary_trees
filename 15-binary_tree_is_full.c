#include "binary_trees.h"

/**
* binary_tree_is_full - check if the bninary tree is full
* @tree: it points to the root nde of the tree
* Return: if trees not full then 1 else return 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (!tree->left && !tree->right)
return (1);
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) &&
binary_tree_is_full(tree->right));
return (0);
}
