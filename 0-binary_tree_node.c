#include "binary_trees.h"

/**
 * binary_tree_node - Create a new binary tree node
 * @parent: Pointer to the parent node of the new node
 * @value: Integer value to store in the new node
 *
 * Description:
 * Allocates memory for a new binary tree node and initializes its fields.
 * The new node's parent pointer is set to @parent, and both left and right
 * child pointers are initialized to NULL. If memory allocation fails, the
 * function returns NULL.
 *
 * Return:
 * Pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

if (parent->left == NULL)
{
parent->left = malloc(sizeof(binary_tree_t));
if (parent->left == NULL)
return (NULL);
parent->left->n = value;
}
else if (parent->right == NULL)
{
parent->right = malloc(sizeof(binary_tree_t));
if (parent->right == NULL)
return (NULL);
parent->right->n = value;
}
else
return (NULL);

return (parent);
}
