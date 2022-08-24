#include "binary_trees.h"

/**
 * full_tree_check - checks to see if a tree is full
 * @tree: the binary tree in question
 * @is_full: a pointer to the tree full flag
 */

void full_tree_check(const binary_tree_t *tree, int *is_full)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL) ^ (tree->right != NULL))
		{
			if (is_full != NULL)
				*is_full = 0;
		}
		full_tree_check(tree->left, is_full);
		full_tree_check(tree->right, is_full);
	}
}

/**
 * binary_tree_is_full - confirms if a binary tree is full
 * @tree: Tree to be checked
 *
 * Return: 1 if the tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int is_tree_full = (tree != NULL ? 1 : 0);

	full_tree_check(tree, &is_tree_full);
	return (is_tree_full);
}
