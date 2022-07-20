#include "binary_trees.h"

/**
 * binary_tree_height - gets the height of tree based on node passed
 * @tree: pointer to node from where to get height
 *
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL)
	{
		height_l = binary_tree_height(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		height_r = binary_tree_height(tree->right) + 1;
	}

	if (height_l > height_r)
	{
		return (height_l);
	}
	return (height_r);
}

/**
 * binary_tree_balance - measures the balance factor of binary tree
 * @tree: pointer to node to measure balance factor
 *
 * Return: Balance factor, or 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t height_l = 0;
	size_t height_r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right == NULL || tree->left == NULL)
	{
		height = binary_tree_height(tree);
		if (tree->left != NULL)
		{
			height_l = binary_tree_height(tree->left);
			return (height_l - height);
		}
		else
		{
			height_r = binary_tree_height(tree->right);
			return (height_r - height);
		}
	}
	else
	{
		height_l = binary_tree_height(tree->left);
		height_r = binary_tree_height(tree->right);
		return (height_l - height_r);
	}

}
