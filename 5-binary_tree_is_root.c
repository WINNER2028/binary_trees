#include "binary_trees.h"

/**
 * binary_tree_is_root - This Checks if a node is the root of a binary tree.
 * @node: A pointer to the new_node to be checked.
 *
 * Return: If the new_node is a root - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *new_node)
{
	if (new_node == NULL || new_node->parent != NULL)
		return (0);

	return (1);
}
