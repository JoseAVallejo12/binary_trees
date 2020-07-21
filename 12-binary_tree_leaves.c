#include "binary_trees.h"
/**
 * traversal - post order traversal binary tree
 * @root: root of the analyzed tree
 * @cnt: counter of leaves
 * Return: number of leaves
 */
size_t traversal(const binary_tree_t *root, size_t cnt)
{
	if (!root)
		return (0);
	if (traversal(root->left, cnt) == 0 && traversal(root->right, cnt) == 0)
		cnt += 1;
	return (cnt);
}
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count, total;

	count = total = 0;
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	total = traversal(tree, count);
	return (total + 1);
}
