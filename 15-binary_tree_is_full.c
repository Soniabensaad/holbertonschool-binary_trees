#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node
 * Return: node with 1 child
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    int left_is_full;
    int right_is_full;
    if (tree == NULL)
    {
        return (0);
    }
    if (tree->left == NULL && tree->right == NULL)
    {
        return (1);
    }
    left_is_full = binary_tree_is_full(tree->left);
    right_is_full = binary_tree_is_full(tree->right);
    if (tree->left != NULL && tree->right != NULL)
    {
        return (left_is_full && right_is_full);
    }
    return (0);
    
    
    
    
}