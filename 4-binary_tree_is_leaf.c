#include "binary_trees.h"

/**
 * binary_tree_is_leaf - this Checks if a node is a leaf in a binary tree.
 * @new_node: A pointer to the node to be checked.
 *
 * Return: If the said new_node is a leaf - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_leaf(const binary_tree_t *new_node)
{
	if (new_node == NULL || new_node->left != NULL || new_node->right != NULL)
		return (0);

	return (1);
}
