#include "binary_trees.h"
/**
 * binary_tree_insert_lefts - funtion for insert node left side
 * @parent: node to insert children left side
 * @value: valor of node left to insert
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL || parent == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->parent = parent;
		parent->right->parent = new_node;
		new_node->right = parent->right;
		parent->right = new_node;
	}
	else
		parent->right = new_node;

	return (parent);
}
