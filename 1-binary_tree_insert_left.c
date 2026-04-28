#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
 binary_tree_t *lefty_child, *tmp;
    
if (parent == NULL)
return (NULL);
lefty_child= malloc(sizeof(binary_tree_t));    
if(lefty_child == NULL)
return (NULL); 
if (parent->left != NULL){
tmp = parent->left;
tmp->parent = lefty_child;
    }
    else
        tmp = NULL;
    lefty_child->n = value;
    lefty_child->left = tmp;
    lefty_child->right = NULL;
    lefty_child->parent = parent;
    parent->left = lefty_child;
    
    return (lefty_child);
}
