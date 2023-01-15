#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the root node
 * Return: uncle of a node
 */
int tree_bst(const binary_tree_t *tree, int min, int max)
{
    if (tree == NULL)
    {
        return (1);
    }
   if (tree->n <= min|| tree->n >= max)
   {
    return (0);
   }
   
   
    return (tree_bst(tree->left, min, tree->n) && tree_bst(tree->right, tree->n, max));
}
int binary_tree_is_bst(const binary_tree_t *tree)
{
   

    if (tree == NULL)
    {
        return (0);
    }
    return(tree_bst(tree,INT_MIN, INT_MAX));

}