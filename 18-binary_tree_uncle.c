#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node whose uncle is to be found
 *
 * Description:
 * The uncle of a node is the sibling of its parent. This function checks
 * whether @node has a parent and whether that parent has a parent
 * (the grandparent). If so, it returns the grandparent's opposite child.
 * If @node is NULL, has no parent, or the parent has no sibling,
 * the function returns NULL.
 *
 * Return: Pointer to the uncle node, or NULL if none exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *dad, *grandfather;
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
return (NULL);

dad = node->parent;
grandfather = dad->parent;

if (grandfather->left == NULL || grandfather->right == NULL)
return (NULL);

return (grandfather->right == dad ? grandfather->left : grandfather->right);
}
