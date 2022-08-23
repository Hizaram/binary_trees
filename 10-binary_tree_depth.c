#include "binary_trees.h"

/**
 * binary_tree_depth - computes and returns the depth of a binary tree
 * @tree: Binary tree to be computed
 *
 * Return: The depth of the tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *node = NULL;

	if (tree != NULL)
	{
		node = tree->parent;
		while (node != NULL)
		{
			depth++;
			node = node->parent;
		}

	}
	return (depth);
}
