#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as the left child of a parent
 * @parent: Pointer to the parent node where the new node will be inserted
 * @value: Integer value to store in the new node
 *
 * Description:
 * Creates a new binary tree node and inserts it as the left child of
 * @parent. If @parent already has a left child, the existing child becomes
 * the left child of the newly created node. If memory allocation fails or
 * if @parent is NULL, the function returns NULL.
 *
 * Return:
 * Pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *lefty_child, *tmp;
if (parent == NULL)
return (NULL);
lefty_child = malloc(sizeof(binary_tree_t));
if (lefty_child == NULL)
return (NULL);

if (parent->left != NULL)
{
tmp = parent->left;
tmp->parent = lefty_child;
}
else
tmp = NULL;

lefty_child->n = value;
lefty_child->left = tmp;
lefty_child->right = NULL;
lefty_child->parent = parent;
parent->left = lefty_child;
return (lefty_child);
}
