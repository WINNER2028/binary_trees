#include "binary_trees.h"

/**
 * binary_tree_height - This Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *new_tree)
{
	if (new_tree)
	{
		size_t l = 0, r = 0;

		l = new_tree->left ? 1 + binary_tree_height(new_tree->left) : 0;
		r = new_tree->right ? 1 + binary_tree_height(new_tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
