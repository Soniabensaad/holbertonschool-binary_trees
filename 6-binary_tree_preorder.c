#include "binary_trees.h"
/**
 * binary_tree_preorder - pre-order traversal
 *@func: pointer to a function to call
 * @tree: pointer to the root node
 * Return: pre-order tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
{
return;
}
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
