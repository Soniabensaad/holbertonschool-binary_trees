#include "binary_trees.h"
/**
 * *binary_tree_insert_right - inserts a node as the right-child
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: insert node in the right
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;
binary_tree_t *tmp;

if (parent == NULL)
return (NULL);

node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);

node->n = value;
node->parent = parent;
node->right = NULL;
node->left = NULL;
if (parent->right == NULL)
{
parent->right = node;
node->parent = parent;
}
else
{
tmp = parent->right;
parent->right = node;
node->right = tmp;
node->parent = parent;
tmp->parent = node;
}
return (node);
}
