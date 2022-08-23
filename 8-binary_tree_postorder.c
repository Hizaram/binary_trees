#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses a binary tree with post-order funct
 * @tree: tree to be traversed
 * @func: the preoder function
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		if (func != NULL)
		{
			binary_tree_postorder(tree->left);
			binary_tree_postorder(tree->right);
			func(tree->n);
		}
	}
}
