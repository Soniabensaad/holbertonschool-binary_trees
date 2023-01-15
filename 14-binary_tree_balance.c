#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node
 * Return: node with 1 child
 */
size_t maximal(size_t a, size_t b)
{
if (a > b)
{
return (a);
}
else
{
return (b);
}
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t height_left;
size_t height_right;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (0);
}
height_left = binary_tree_height(tree->left);
height_right = binary_tree_height(tree->right);
return (maximal(height_left, height_right) + 1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
int i = 0, j = 0;
if (tree == NULL)
{
return (0);
}
i = binary_tree_height(tree->left);
j = binary_tree_height(tree->right);
return (i - j);
}
