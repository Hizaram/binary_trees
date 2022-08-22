#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of \
 * given binary tree node
 * @parent: the parent of the new binary node
 * @value: value of the newly inserted node
 *
 * Return: a pointer to the new node, otherwise NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child = NULL;

	if (parent != NULL)
	{
		left_child = malloc(sizeof(binary_tree_t));
		if (left_child != NULL)
		{
			left_child->left = parent->left;
			left_child->right = NULL;
			left_child->parent = parent;
			left_child->n = value;
			if (parent->left != NULL)
			{
				parent->left->parent = left_child;
			}
			parent->left = left_child;
		}
	}
	return (left_child);
}
