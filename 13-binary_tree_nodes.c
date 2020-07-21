#include "binary_trees.h"

int travel_tree(const binary_tree_t *tree, size_t n_l, size_t n_r)
{
	if (tree == NULL)
		return (1);

	n_l += travel_tree(tree->left, n_l, n_r);
	n_r += travel_tree(tree->right, n_l, n_r);

	if (n_l > n_r)
		return n_l;
	else
		return n_r;
}


/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_r, node_l;
	node_r = 0;
	node_l = 0;
	if (tree == NULL)
		return (0);

	return(travel_tree(tree, node_l, node_r) - 1);

}
