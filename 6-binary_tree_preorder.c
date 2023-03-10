#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through binary tree in pre-order transversal
 * @tree: tree to go through
 * @func: pointer to function to call on each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func); /* first left */
	binary_tree_preorder(tree->right, func); /* then right */
}
