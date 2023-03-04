#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts number of leaves in a tree
 * @tree: tree to count on
 * Return: Number of leaves
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t sum;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	else
	{
		sum = binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);
		return (sum);
	}
}
