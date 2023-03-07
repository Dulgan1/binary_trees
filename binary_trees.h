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
 * binary_tree_insert_left - inserts new node by left of parent
 * @parent: parent to insert node to by left
 * @value: value for data of node
 * Return: the node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/**
 * binary_tree_delete - deletes tree
 * @tree: pointer to the root node of tree to delete
 */

void binary_tree_delete(binary_tree_t *tree);

/**
 * binary_tree_is_leaf - checks if a sub-tree/node is a leaf
 * @node: the node to check
 * Retrun: returns 1 if true, 0 isf not
 */

int binary_tree_is_leaf(const binary_tree_t *node);

/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node to check
 * Return: returns 1 if truee, 0 if not or node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node);

/**
 * binary_tree_preoder - goes through binary tree in pre-order transversal
 * @tree: tree to go through
 * @func: pointer to function to call on each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_inorder - goes through a binary tree inorder trasversal
 * @tree: tree to go through
 * @func: function to work on each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_post_order - traverse passed tree in postorder traversal
 * @tree: passed tree
 * @func: function to work on data of each node encounterred
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/**
 * binary_tree_height - gets the distance of the  farthest leaf of a tree
 *                      from root
 * @tree: tree to work on
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_depth - gets the depth of apassed tree
 * @tree: passed tree
 * Return: depth of tree
 */

size_t binary_tree_depth(const binary_tree_t *tree);

/**
 * binary_tree_size - gets the size of a binary tree
 * @tree: the tree
 * Return: in size_t the size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree);

/**
 * binary_tree_leaves - Counts number of leaves in a tree
 * @tree: tree to count on
 * Return: Number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree);

/**
 * binary_tree_nodes - counts nodes with atleast one child
 * @tree: tree to count nodes from
 * Return: returns in size_t, the sum of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree);
#endif /* BINARY_TREES_H */
