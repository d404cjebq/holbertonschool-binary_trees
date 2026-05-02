#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Description:
 * A full binary tree is a tree in which every node has either
 * exactly two children or no children at all. This function
 * recursively verifies that every node in the tree satisfies
 * this property. If @tree is NULL, the function returns 0.
 *
 * Return: 1 if the tree is full, otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
int l = 0, r = 0;
if (tree == NULL)
return (0);

r = tree->right ? binary_tree_is_full(tree->right) && 1 : 0;
l = tree->left ? binary_tree_is_full(tree->left) && 1 : 0;

if (!(r || l))
{
r = 1;
l = 1;
}

return (r && l);
}
