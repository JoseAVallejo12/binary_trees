#include "binary_trees.h"
/**
 * _is_a_leaf - checks if a node is a leaf
 * @node:  pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int _is_a_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
/**
 * height - counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves
 */

size_t height(const binary_tree_t *tree)
{
	size_t right_c, left_c;

	if (!tree)
		return (0);

	if (tree != NULL && _is_a_leaf(tree))
		return (1);

	left_c = height(tree->left);
	right_c = height(tree->right);
	return (left_c + right_c);
}

/**
 * binary_tree_balance - check balancer of binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: balancer
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int h_l, h_r;
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	h_l = height(tree->left);
	h_r = height(tree->right);

	return (h_l - h_r);
}
