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
 * Return: returns the node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/**
 * binary_tree_insert_right - function inserts node as right child
 * @parent: parent of node
 * @value: data for node
 * Return: returns the node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node of the tree to print
 */

void binary_tree_print(const binary_tree_t *tree);

/**
 * _height - Measures the height of a binary tree
 * @tree: Pointer to the node to measures the height
 * Return: The height of the tree starting at @node
 */

size_t _height(const binary_tree_t *tree);

/**
 * print_t - Stores recursively each level in an array of strings
 *
 * @tree: Pointer to the node to print
 * @offset: Offset to print
 * @depth: Depth of the node
 * @s: Buffer
 *
 * Return: length of printed tree after process
 */

int print_t(const binary_tree_t *tree, int offset, int depth, char **s);

/**
 * binary_tree_insert_left - inserts new node by left of parent
 * @parent: parent to insert node to by left
 * @value: value for data of node
 * Return: the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
#endif
