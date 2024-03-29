#include "binary_trees.h"

/**
* binary_tree_balance - it measures the balance factor of a binary tree
* @tree: it points to the root node of the tree 
* Return: If tree is Null then 0, else return balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

return (0);
}
/**
* binary_tree_height - it measure s the hieight of a binary tree 
* @tree: it points to the root node of the tree 
* Return: If tree is nUll then 0, else return hieght
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t l = 0, r = 0;
l += 1 + binary_tree_height(tree->left);
r += 1 + binary_tree_height(tree->right);
if (lef > rig)
return (lef);

return (rig);
}
return (0);

