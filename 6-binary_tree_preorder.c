#include "binary_trees.h"

/**
 * binary_tree_preoder - goes through binary tree in pre-order transversal
 * @tree: tree to go through
 * @func: pointer to function to call on each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !node)
		return;
	func(tree->n);
	binary_tree_preoder(tree->left, func); /* first left */
	binary_tree_prerder(tree->right, func); /* then right */
}
