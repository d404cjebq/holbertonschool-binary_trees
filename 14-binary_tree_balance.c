#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Description:
 * The balance factor of a binary tree is defined as the height of the
 * left subtree minus the height of the right subtree. A NULL tree has
 * a balance factor of 0. This function recursively computes the height
 * of each subtree to determine the balance factor.
 *
 * Return: The balance factor of the tree as an integer
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (binary_trees_height(tree->left) - binary_trees_height(tree->right));
}

/**
 * binary_trees_height - Measure the height of a binary tree
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
int binary_trees_height(const binary_tree_t *tree)
{
int l = 0, r = 0;
if (tree == NULL)
return (-1);

l = tree->left ? binary_trees_height(tree->left) + 1 : 0;
r = tree->right ? binary_trees_height(tree->right) + 1 : 0;

return (l > r ? l : r);
}
