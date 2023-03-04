#include "binary_trees.h"

/**
 * binary_tree_post_order - traverse passed tree in postorder traversal
 * @tree: passed tree
 * @func: function to work on data of each node encounterred
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
