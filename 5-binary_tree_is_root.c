#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 *
 * @node: a node from binary tree
 * Return: true or false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
{
return (0);
}
if (node->parent == NULL)
{
return (1);
}
return (0);
}
