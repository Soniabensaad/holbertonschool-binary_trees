#include "binary_trees.h"
/**
 * binary_tree_postorder - post-order traversal
 *@func: pointer to a function to call
 * @tree: pointer to the root node
 * Return: post-order tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
{
return;
}
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
if (func == NULL)
{
return;
}
}
