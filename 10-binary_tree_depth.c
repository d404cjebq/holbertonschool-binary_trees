#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Description:
 * Measures the depth of a given node in a binary tree by recursively
 * counting the number of ancestor nodes between the given node and
 * the root. The root node has a depth of 0. If tree is NULL,
 * the function returns 0.
 *
 * Return:
 * The depth of the node, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
if (tree == NULL || tree->parent == NULL)
return (0);
return(binary_tree_depth(tree->parent) + 1 );
}
