#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses a binary tree with pre-order funct
 * @tree: tree to be traversed
 * @func: the preoder function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		if (func != NULL)
		{
			func(tree->n);
			binary_tree_preorder(tree->left);
			binary_tree_preorder(tree->right);
		}
	}
}
