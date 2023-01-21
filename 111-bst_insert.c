#include "binary_trees.h"
bst_t *bst_insert(bst_t **tree, int value)
{
    bst_t *new;
    if (tree == NULL)
    {
        return (NULL);
    }
    if (*tree == NULL)
    {
        *tree = binary_tree_node(NULL, value);
        return (*tree);
    }
    while (*tree)
    {
        if (value < (*tree)->n)
        {
            if ((*tree)->left)
            {
                (*tree)= (*tree)->left;
            }
            else
            {
                new = binary_tree_node(*tree, value);
                (*tree)->left = new;
                 return (new);
            }
       
        }
        else if (value > (*tree)->n)
        {
           if ((*tree)->left)
           {
               (*tree)= (*tree)->left;
           }
           else
           {
             new = binary_tree_node(*tree, value);
             (*tree)->left = new;
             return (new);

           }
        }
        else
        {
            return NULL;
        }
    }
    return (NULL);
}