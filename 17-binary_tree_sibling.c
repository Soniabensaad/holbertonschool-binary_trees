#include "binary_trees.h"
/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node: pointer to the root node
 * Return: sibling of a node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
{
return (NULL);
}
if (node->parent->left == node)
{
return (node->parent->right);
}
if (node->parent->right == node)
{
return (node->parent->left);
}
return (NULL);
}
