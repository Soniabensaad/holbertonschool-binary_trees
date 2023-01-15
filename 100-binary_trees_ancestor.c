#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the root node
 * Return: uncle of a node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{

binary_tree_t *i;
 binary_tree_t *j;
 if (first == NULL || second == NULL)
    {
        return (NULL);
    }
   if (first == second)
   {
    return ((binary_tree_t*)first);
   }
   i = first->parent;
   j = second->parent;
   if ((i == NULL) || (i == second) ||(i->parent == NULL && j))
   {
    return (binary_trees_ancestor(first, j));
   }
   else if ((j == NULL) || (j == first) ||(j->parent == NULL && i))
   {
    return (binary_trees_ancestor(i, second));
   }
   return (binary_trees_ancestor(i, j));

   
   
    
}