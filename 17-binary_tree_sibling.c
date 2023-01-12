#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node
 * Return: node with 1 child
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    
    if (node == NULL || node->parent == NULL)
    {
        return(NULL);
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
   