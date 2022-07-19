#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 *@tree: pointer to root node
 *
 * Return: count, or 0 if NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		count = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
	}
	else if (tree->left != NULL)
	{
		count = binary_tree_nodes(tree->left) + 1;
	}
	else if (tree->right != NULL)
	{
		count = binary_tree_nodes(tree->right) + 1;
	}

	return (count);
}
