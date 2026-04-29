#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 *
 * Description:
 * Performs a pre-order traversal on a binary tree. For each visited node,
 * the function pointed to by @func is called with the node's value. The
 * traversal order is: current node, left subtree, then right subtree.
 *
 * Return:
 * Nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL)
return;

func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);

}
