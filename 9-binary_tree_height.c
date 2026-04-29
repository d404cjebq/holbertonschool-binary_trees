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
size_t L;
size_t R ;
if (tree == NULL)
return (0);

L =(tree->left)?binary_tree_height(tree->left) +1:0;
R =(tree->right)?binary_tree_height(tree->right) +1:0;
if (L > R)
return (L);
return (R);
}
