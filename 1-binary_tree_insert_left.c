#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts new node by left of parent
 * @parent: parent to insert node to by left
 * @value: value for data of node
 * Return: returns the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->right = NULL;

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}
	else
		parent->left = node;

	return (node);
}
