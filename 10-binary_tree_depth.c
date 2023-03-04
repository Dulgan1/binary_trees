#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of apassed tree
 * @tree: passed tree
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree || !tree->parent)
		return (0);

	depth = tree->parent ? 1 + (binary_tree_depth(tree->parent)) : 0;

	return (depth);
}
