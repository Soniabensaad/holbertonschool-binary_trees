#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the root node
 * Return: uncle of a node
 */
size_t tree_height (const binary_tree_t *root)
{
   size_t left;
    size_t right;
    if (root == NULL || root->left == NULL || root->right == NULL)
    {
        return (0);
    }
    left = tree_height(root->left);
    right = tree_height(root->right);
    if (left >= right)
    {
        return (left + 1);
    }
    return (right +1);

}

void printer_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
    if (tree == NULL)
    {
        return;
    }
    
    if (level == 0)
    {
        func(tree->n);
    }
    else if(level > 0)
    {
        printer_level(tree->left, func, level - 1);
        printer_level(tree->right, func, level - 1);
    }
    
    

}
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
   size_t height = tree_height(tree) + 1;
    size_t i;
    if ((tree == NULL) || (func == NULL))
    {
        return;
    }
    func(tree->n);
    for (i = 0; i < height ; i++)
    {
        printer_level(tree, func, i);
        
    }
    

    


}