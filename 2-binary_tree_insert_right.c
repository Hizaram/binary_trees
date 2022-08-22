#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of \
 * given binary tree node
 * @parent: the parent of the new binary node
 * @value: value of the newly inserted node
 *
 * Return: a pointer to the new node, otherwise NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child = NULL;

	if (parent != NULL)
	{
		right_child = malloc(sizeof(binary_tree_t));
		if (right_child != NULL)
		{
			right_child->right = parent->right;
			right_child->left = NULL;
			right_child->parent = parent;
			right_child->n = value;
			if (parent->right != NULL)
			{
				parent->right->parent = right_child;
			}
			parent->right = right_child;
		}
	}
	return (right_child);
}
