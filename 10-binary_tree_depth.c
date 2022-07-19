#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 *
 * Return: depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t depth = binary_tree_depth(tree->left);
		size_t depth1 = binary_tree_depth(tree->right);

		if (tree->parent == NULL)
		{
			return (0);
		}
		if (depth < depth1)
		{
			return (depth + 1);
		}
		else
		{
			return (depth1 + 2);
		}
	}
}
