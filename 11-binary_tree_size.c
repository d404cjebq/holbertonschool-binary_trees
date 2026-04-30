#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Description:
 * Measures the total number of nodes in a binary tree by recursively
 * counting the nodes in the left and right subtrees and adding 1
 * for the current node. If tree is NULL, the function returns 0.
 *
 * Return:
 * The total number of nodes in the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
