#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Description:
 * Determines whether a given binary tree node is a leaf. A node is
 * considered a leaf if it is not NULL and both its left and right
 * child pointers are NULL.
 *
 * Return:
 * 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node->left == NULL && node->right == NULL)
return (1);
return (0);
}
