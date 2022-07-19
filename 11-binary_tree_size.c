#include "binary_trees.h"

/**
 * binary_tree_size - gets size of a tree based on passed node
 * @tree: pointer to root node
 *
 * Return: size of tree, 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
	{
		return (0);
	}

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);
	return (size);
}
