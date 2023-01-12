#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node
 * Return: node with 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t left_node;
size_t right_node;
size_t count = 0;
if (tree == NULL)
{
return (0);
}
if (tree->right != NULL || tree->left != NULL)
{
count = 1;
}
left_node = binary_tree_nodes(tree->left);
right_node = binary_tree_nodes(tree->right);
return (count + left_node + right_node);
}
