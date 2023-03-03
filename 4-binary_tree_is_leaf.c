#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a sub-tree/node is a leaf
 * @node: the node to check
 * Retrun: returns 1 if true, 0 isf not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if(node == NULL)
		return 0;

	if(node->left == NULL && node->right == NULL)
		return 1;

	return 0;
}
