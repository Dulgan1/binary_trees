#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with atleast one child
 * @tree: tree to count nodes from
 * Return: returns in size_t, the sum of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t sum = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		sum++;

	sum += binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);

	return (sum);
}
