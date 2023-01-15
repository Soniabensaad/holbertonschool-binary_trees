#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the root node
 * Return: uncle of a node
 */
size_t count_nodes(const binary_tree_t *tree)
{
     size_t count = 0;
    if (tree == NULL)
    {
        return(0);
    }
    count = count_nodes(tree->left) + count_nodes(tree->right) + 1;
    return(count);
}
int is_complete(const binary_tree_t *tree, size_t count_nodes, size_t index)
{
    if (tree == NULL)
    {
        return (1);
    }
    if (index >= count_nodes)
    {
        return (0);
    }
    return (is_complete(tree->left,count_nodes, 2*index +1) && is_complete(tree->right, count_nodes, 2*index+2));

    
}
int binary_tree_is_complete(const binary_tree_t *tree)
{
    size_t number_nodes, index = 0;
    if (tree == NULL)
    {
        return(0);
    }
     number_nodes = count_nodes(tree);
    return (is_complete(tree, number_nodes, index));
}
