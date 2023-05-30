#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @new_tree: pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *new_tree)
{
	size_t leaves = 0;

	if (new_tree)
	{
		leaves += (!new_tree->left && !new_tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(new_tree->left);
		leaves += binary_tree_leaves(new_tree->right);
	}
	return (leaves);
}
