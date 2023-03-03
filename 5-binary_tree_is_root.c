#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node to check
 * Return: returns 1 if truee, 0 if not or node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);

	return (0);
}
