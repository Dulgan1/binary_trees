#include "binary_trees.h"

/**
 * binary_tree_insert_right - function inserts node as right child
 * @parent: parent of node
 * @value: data for node
 * Return: returns the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
	}
	else
		parent->right = node;

	return (node);
}
