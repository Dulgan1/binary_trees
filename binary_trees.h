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

/**
 * binary_tree_node - creates a new node to add to a binary tree
 * @parent: parent to add node to as child
 * @value: stores data of node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/**
 * binary_tree_insert_right - function inserts node as right child
 * @parent: parent of node
 * @value: data for node
 * Return: returns the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
#endif
