#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the nodes
 *
 * Description:
 * Counts the total number of internal nodes in a binary tree by recursively
 * traversing the left and right subtrees. A node is counted only if it has
 * at least one child. Leaf nodes and NULL pointers are not counted.
 * If tree is NULL, the function returns 0.
 *
 * Return:
 * The total number of nodes with at least 1 child, or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
