#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling of
 *
 * Description:
 * The sibling of a node is the other child of its parent. This function
 * checks whether @node has a parent, and if so, returns the parent's
 * opposite child. If @node is NULL, has no parent, or has no sibling,
 * the function returns NULL.
 *
 * Return: Pointer to the sibling node, or NULL if none exists
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *p;
if (node == NULL || node->parent == NULL)
return (NULL);

p = node->parent;

if (p->left == NULL || p->right == NULL)
return (NULL);

return (p->left == node ? p->right : p->left);
}
