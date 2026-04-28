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
binary_tree_t *new_child;

new_child = malloc(sizeof(binary_tree_t));
if (new_child == NULL)
return (NULL);

new_child = parent;

    if (new_child->left == NULL)
        new_child = new_child->left;
    else if (new_child->right == NULL)
        new_child = new_child->right;
    else
    return (NULL);

new_child->n = value;

return (new_child);
}
