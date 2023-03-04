#include "binary_trees.h"

/**
 * binary_tree_height - gets the distance of the  farthest leaf of a tree 
 * 			from root
 * @tree: tree to work on
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return 0;
	size_t left_h; /* left height */
	size_t right_h; /* right height */

	left_h = tree->left ? 1 + (binary_tree_height(tree->left)) : 0;
	right_h = tree->right ? 1 + (binary_tree_height(tree->right)) : 0;

	return(right_h > left_h ? right_h : left_h);
}
