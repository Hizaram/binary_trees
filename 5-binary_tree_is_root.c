#include "binary_trees.h"

/**
 * binary_tree_is_root - checks to see if a node is a root
 * @node: node to check
 *
 * Return: 1 if is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->parent == NULL)
			return (1);
	}
	return (0);
}