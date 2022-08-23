#include "binary_trees.h"

/**
 * node_counter - counts the nodes in a binary tree
 * @tree: tree to be counted
 * @n: Pointer to the tree node counter
 */

void node_counter(const binary_tree_t *tree, size_t *n)
{
	if (tree != NULL)
	{
		if (n != NULL)
			(*n)++;
		node_counter(tree->left, n);
		node_counter(tree->right, n);
	}
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: The binary tree to be measured
 *
 * Return: size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t n = 0;

	node_counter(tree, &n);
	return (n);
}
