#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node to find the sibling of
 *
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

	if (parent->left == node)
	{
		if (parent->right != NULL)
		{
			return (parent->right);
		}
		else
		{
			return (NULL);
		}
	}

	else
	{
		if (parent->left != NULL)
		{
			return (parent->left);
		}
		else
		{
			return (NULL);
		}
	}
}

#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to node to find the uncle of
 *
 * Return: pointer to uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;
	return (binary_tree_sibling(parent));
}
