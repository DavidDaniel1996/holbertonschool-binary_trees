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

/**
 * binary_tree_is_perfect - checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 *
 *
 * Return: 0 if its not perfect and 1 if it is.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth_right = binary_tree_depth(tree->right);
	int depth_left = binary_tree_depth(tree->left);

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (depth_right > depth_left || depth_left > depth_right)
	{
		return (0);
	}
	if ((tree->left) && (tree->right))
	{
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right));
	}
	else
	{
		return (0);
	}
}
