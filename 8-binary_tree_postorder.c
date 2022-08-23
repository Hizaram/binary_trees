#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree with post-order funct
 * @tree: tree to be traversed
 * @func: the postorder function
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		if (func != NULL)
		{
			binary_tree_postorder(tree->left, func);
			binary_tree_postorder(tree->right, func);
			func(tree->n);
		}
	}
}
