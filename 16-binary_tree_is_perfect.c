#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Description:
 * A perfect binary tree is a tree in which all internal nodes have
 * exactly two children and all leaves are at the same depth. This
 * function recursively verifies both conditions. If @tree is NULL,
 * the function returns 0.
 *
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (perfect_size(height(tree)) == size(tree));
}

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Description:
 * This helper function computes the height of a binary tree, defined as
 * the number of edges on the longest path from the given node down to
 * a leaf. If @tree is NULL, the function returns 0.
 *
 * Return: The height of the tree as an integer
 */
int height(const binary_tree_t *tree)
{
int l, r;
if (tree == NULL)
return (0);

l = tree->left ? height(tree->left) + 1 : 0;
r = tree->right ? height(tree->right) + 1 : 0;

return (l > r ? l : r);
}

/**
 * perfect_size - Computes the number of nodes in a perfect binary tree
 * @n: Height of the tree
 *
 * Description:
 * A perfect binary tree of height @n contains exactly (2^(n + 1)) - 1
 * nodes. This helper function computes that value based on the given
 * height. If @n is less than 0, the function returns 0.
 *
 * Return: The total number of nodes in a perfect binary tree of height @n
 */
int perfect_size(int n)
{
int i = 0, k = 1;
for (; i <= n; k *= 2, i++)
{
}

return (k - 1);
}

/**
 * size - Measures the size of a binary tree
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
int size(const binary_tree_t *tree)
{
if (tree != NULL)
return (size(tree->left) + size(tree->right) + 1);

return (0);
}
