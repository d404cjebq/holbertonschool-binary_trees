#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Description:
 * Computes the height of a binary tree. The height is defined as the
 * number of edges on the longest path from the root node down to a leaf.
 * If @tree is NULL, the height is considered to be 0.
 *
 * Return:
 * The height of the tree as a size_t value.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t L = 0, R = 0;
binary_tree_t tmp;
if (tree == NULL)
return (0);
tmp = tree;
while (tmp)
{
L = tmp->left ?  ++L : L ;
tmp = tmp->left;
}
tmp = tree;
while (tmp)
{
R = tmp->right ?  ++R : R ;
tmp = tmp->right;
}
L = L > R ? L : R;
return (L);
}
