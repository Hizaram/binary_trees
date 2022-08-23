#include "binary_trees.h"

/**
 * node_h - Computes the height of a particular node
 * @tree: the Binary tree
 * @n: The sum of the height
 * @height: A pointer to the maximum height of the node's tree
 */

void node_h(const binary_tree_t *tree, size_t n, size_t *height)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			if (n > *height)
				*height = n;
		}
		else
		{
			node_h(tree->left, n + 1, height);
			node_h(tree->right, n + 1, height);
		}
	}
}


/**
 * binary_tree_height - Computes the height of a binary tree
 * @tree: tree to be used
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	node_h(tree, 0, &height);
	return (height);
}
