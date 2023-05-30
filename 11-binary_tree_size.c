#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @new_tree: pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *new_tree)
{
	size_t size = 0;

	if (new_tree)
	{
		size += 1;
		size += binary_tree_size(new_tree->left);
		size += binary_tree_size(new_tree->right);
	}
	return (size);
}
