#include "binary_trees.h"
/**
 * *binary_tree_insert_left -  inserts a node as the left-child of another node
 *
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: insert node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
    {
        return (NULL);
    }
    binary_tree_t *node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
    {
        return (NULL);
    }
    node->n = value;
    node->parent = parent;
    node->right = NULL;
    node->left = NULL;
    if (parent->left == NULL)
    {
        parent->left = node;
    }
    else
    {
        node->left = parent->left;
        parent->left->parent = node;
        parent->left = node;
    }
    return (node);
}
