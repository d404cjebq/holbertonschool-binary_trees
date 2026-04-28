#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert a node as the right child of a parent
 * @parent: Pointer to the parent node
 * @value: Integer value to store in the new node
 *
 * Description:
 * Creates a new binary tree node and inserts it as the right child of
 * @parent. If @parent already has a right child, that existing child is
 * moved down and becomes the right child of the newly created node.
 * If memory allocation fails or @parent is NULL, the function returns NULL.
 *
 * Return:
 * Pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *righty_child, *tmp;
if (parent == NULL)
return (NULL);

righty_child = malloc(sizeof(binary_tree_t));
if (righty_child == NULL)
return (NULL);

if (parent->right != NULL)
{
tmp = parent->right;
tmp->parent = righty_child;
}
else
tmp = NULL;

righty_child->n = value;
righty_child->right = tmp;
righty_child->left = NULL;
righty_child->parent = parent;
parent->right = righty_child;

return (righty_child);
}
