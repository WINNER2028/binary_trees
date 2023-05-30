#include "binary_trees.h"

/**
 * binary_tree_depth - This Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *new_tree)
{
	return ((new_tree && new_tree->parent) ? 1 + binary_tree_depth(new_tree->parent) : 0);
}
