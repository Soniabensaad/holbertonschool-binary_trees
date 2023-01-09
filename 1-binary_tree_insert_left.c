#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    binary_tree_t *temp;
    if (node == NULL)
    {
        return (NULL);
    }
    if (parent == NULL)
    {
        return (NULL);
    }
    
    node->n = value;
    node->right = NULL;
    node->left = NULL;
    if (parent->left == NULL)
    {
        parent->left = node;
    
    }
    
    else
    {
        temp = parent->left;
        parent->left = node;
        node->left = temp;
        node->parent = parent;
        temp->parent = node;
    }

    return (node);

}