#include "binary_trees.h"

/**
 * leaf_count - counts the number of leaves in a node
 * @tree: the binary tree in question
 * @n: a pointer to the tree's leaf count
 */

void leaf_count(const binary_tree_t *tree, size_t *n)
{
	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
		{
			if (n != NULL)
				(*n)++;
		}
		leaf_count(tree->left, n);
		leaf_count(tree->right, n);
	}
}

/**
 * binary_tree_leaves - Returns the number of leaves in a b-tree node
 * @tree: Binary tree in question
 *
 * Return: number of leaves in a given binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	leaf_count(tree, &leaves);
	return (leaves);
}
