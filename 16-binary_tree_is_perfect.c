#include "binary_trees.h"
/**
 * compare_node - counts the height
 * @tree: pointer to the root node
 * Return: height
 */
int compare_node(const binary_tree_t *tree)
{
if (tree == NULL)
{
return (0);
}
else
{
return (compare_node(tree->left) + compare_node(tree->right) + 1);
}
}

/**
 * binary_tree_is_perfect - counts the nodes with at least 1 child
 * @tree: pointer to the root nodechecks if a binary tree is perfect
 * Return: node with 1 child
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int perfect_left = 0, perfect_right = 0;
if (tree == NULL)
{
return (0);
}
if (tree && tree->left == NULL && tree->right == NULL)
{
return (1);
}
perfect_left = compare_node(tree->left);
perfect_right = compare_node(tree->right);
if ((perfect_left - perfect_right) == 0)
{
return (1);
}
return (0);
}
