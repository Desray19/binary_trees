#include "binary_trees.h"

/**
* binary_tree_insert_right - insert node at right
* @parent: it points to node 
* @value: it is stored in the new node
* Return: if parent is NULL then NULL else return a point to the new node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node = NULL;

if (parent == NULL || value == '\0')
return (NULL);

new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL)
return (NULL);

new_node->n = value;
new_node->parent = parent;
new_node->left = NULL;
new_node->right = NULL;

if (parent->right != NULL)
{
new_node->right = parent->right;
new_node->right->parent = new_node;
}
parent->right = new_node;
return (new_node);
}
