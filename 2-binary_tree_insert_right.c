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

	temp = malloc(sizeof(binary_tree_t));
	if (parent == NULL || temp == NULL || value < parent->n)
	{
		return (NULL);
	}
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	temp->parent = parent;

	if (parent->right != NULL)
	{
		if (temp->n > parent->right->n)
		{
			return (NULL);
		}
		temp->right = parent->right;
		temp->right->parent = temp;
		parent->right = temp;
		return (parent->right);
	}
	else
	{
		parent->right = temp;
		return (parent->right);
	}
}
