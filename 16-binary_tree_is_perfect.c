#include "binary_trees.h"

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
* @tree: Pointer to the root of the binary tree.
* Return: 1 if perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (!tree)
return 0;

if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
return 1;

return 0;
}

/**
* binary_tree_is_full - Checks if a binary tree is full.
* @tree: Pointer to the root of the binary tree.
* Return: 1 if full, 0 otherwise.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
if (!tree)
return 0;

if (!tree->left && !tree->right)
return 1;

if (tree->left && tree->right)
return binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);

return 0;
}

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @tree: Pointer to the root of the binary tree.
 * Return: Balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;

if (!tree)
return 0;

left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

return left_height - right_height;
}

/**
* binary_tree_height - Calculates the height of a binary tree.
* @tree: Pointer to the root of the binary tree.
* Return: Height of the binary tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;

if (!tree)
return 0;

left_height = 1 + binary_tree_height(tree->left);
right_height = 1 + binary_tree_height(tree->right);

return left_height > right_height ? left_height : right_height;
}

