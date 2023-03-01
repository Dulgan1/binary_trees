#include "binary_tree.h"

/**
 * binary_tree_node - creates a new node in a binary tree
 * @parent: pointer to parent to be given the new node as child
 * @value: data  of the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!node)
		return NULL;
	node->parent = parent;
	node->n = value;
	node->right = NULL;
	node->left = NULL
}
