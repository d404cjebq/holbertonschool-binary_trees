#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverse a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 *
 * Description:
 * Performs a post-order traversal on a binary tree. For each visited node,
 * the function pointed to by @func is called with the node's value.
 * The traversal order is: left subtree, right subtree, then current node.
 *
 * Return:
 * Nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

binary_tree_postorder(tree->left, func);

binary_tree_postorder(tree->right, func);

func(tree->n);

}
