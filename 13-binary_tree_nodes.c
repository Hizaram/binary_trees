#include "binary_trees.h"

/**
 * node_count - counts the number of nodes with at least one child
 * @tree: the binary tree in question
 * @n: a pointer to the tree's non-leaf count
 */

void node_count(const binary_tree_t *tree, size_t *n)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL) || (tree->right != NULL))
		{
			if (n != NULL)
			{
				(*n)++;
				node_count(tree->left, n);
				node_count(tree->right, n);
			}
		}
	}
}

/**
 * binary_tree_nodes - Returns the number of nodes with at least one \
 * child in a binary tree
 * @tree: Binary tree in question
 *
 * Return: number of nodes with at least one child in a given binary tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	node_count(tree, &nodes);
	return (nodes);
}
