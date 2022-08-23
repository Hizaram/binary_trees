#include "binary_trees.h"

/**
 * node_h - Computes the height of a particular node
 * @tree: the Binary tree
 * @n: The sum of the height
 * @height: A pointer to the maximum height of the node's tree
 */

void node_h(const binary_tree_t *tree, int n, int *height)
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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: Binary tree in question
 *
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int bal_factor = 0;
	int left_height = 0;
	int right_height = 0;

	if (tree != NULL)
	{
		node_h(tree->left, 1, &left_height);
		node_h(tree->right, 1, &right_height);
	}
	bal_factor = left_height - right_height;
	return (bal_factor);
}
