#include "binary_trees.h"
/**
 * maximal - maximum between a & b
 *@a: size_t a
 * @b: size_t b
 * Return: maximum between a & b
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
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (0);
}
size_t height_left = binary_tree_height(tree->left);
size_t height_right = binary_tree_height(tree->right);
return (maximal(height_left, height_right) + 1);
}
