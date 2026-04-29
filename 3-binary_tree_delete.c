#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
while (tree)
{

if (tree->left == NULL && tree->right == NULL)
{
free(tree);
return;
}

if (tree->left != NULL)
binary_tree_delete(tree->left);

if (tree->right != NULL)
binary_tree_delete(tree->right);
}
}
