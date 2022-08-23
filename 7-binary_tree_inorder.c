#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary tree with in-order funct
 * @tree: tree to be traversed
 * @func: the preoder function
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL)
	{
		if (func != NULL)
		{
			binary_tree_inorder(tree->left, func);
			func(tree->n);
			binary_tree_inorder(tree->right, func);
		}
	}
}

