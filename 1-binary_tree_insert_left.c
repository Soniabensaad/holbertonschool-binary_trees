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
    binary_tree_t *node;
    binary_tree_t *tmp;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	if (parent->left == NULL)
	{
		parent->left = node;
        node->parent = parent;
	}
	else
	{
		tmp = parent->left;
        parent->left = node;
        node->left = tmp;
        node->parent = parent;
        tmp->parent = node;

	}
	return (node);
}
