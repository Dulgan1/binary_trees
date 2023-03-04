#include "binary_trees.h"

/**
 * binary_tree_size - gets the size of a binary tree
 * @tree: the tree
 * Return: in size_t the size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = 1 + binary_tree_size(tree->left);
	size += (binary_tree_size(tree->right));

	return (size);
}
