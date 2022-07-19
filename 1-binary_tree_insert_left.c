#include "binary_trees.h"

/**
 * binary_tree_node - creates a node
 * @parent: pointer to the parent of the node
 * @value: value to put in new node
 *
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
  binary_tree_t *temp;

  temp = malloc(sizeof(binary_tree_t));
  if (temp == NULL || parent == NULL || value > parent->n)
  {
    return (NULL);
  }

  temp->n = value;
	temp->left = NULL;
	temp->right = NULL;
	temp->parent = parent;

  if (parent->left != NULL)
  {
    if (temp->n > parent->left->n)
		{
			return (NULL);
		}

    temp->left = parent->left;
    temp->left->parent = temp;
    parent->left = temp;
    return (parent->left);
  }
  else
  {
    parent->left = temp;
    return (parent->left);
  }
}