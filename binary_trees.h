#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h> /* mainly for malloc and free */

/**
 * struct binary_tree_s - struct defining a binary tree node
 * @n: data for the node as integer
 * @parent: of node 
 * @left: left child of node/subtree
 * @right: right child of node/subtree
 */

typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

#endif
