#include "binary_trees.h"

/**
 * binary_tree_node - creates a node
 * @parent: pointer to the parent of the node
 * @value: value to put in new node
 *
 * Return: pointer to new node
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	temp->parent = parent;

	if (parent == NULL)
	{
		temp->parent = NULL;
		parent = temp;
		return (parent);
	}

	else
	{
		if (value < parent->n)
		{
			parent->left = temp;
			return (parent->left);
		}
		else
		{
			parent->right = temp;
			return (parent->right);
		}
	}
}
