#include "binary_trees.h"
/**
 * 
 * 
 */
void binary_tree_delete(binary_tree_t *tree)
{
    /* do nothing if passed a non-existent node */
    if (tree == NULL)
        return;

    /* now onto the recursion */
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);

    free(tree);
	
}