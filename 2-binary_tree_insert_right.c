#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts new right-child node
 * @parent: pointer to the parent of the new node
 * @value: value of new node
 *
 * Return: pointer to new node, NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL || value < parent->n)
	{
		return (NULL);
	}

	if (parent->right != NULL && value > parent->right->n)
	{
		return (binary_tree_insert_right(parent->right, value));
	}
	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	temp->parent = parent;

	if (parent->right != NULL)
	{
		temp->right = parent->right;
		temp->right->parent = temp;
	}
	else
	{
		parent->right = temp;
	}
	parent->right = temp;
	return (temp);
}
