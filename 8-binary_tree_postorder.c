#include "binary_trees.h"

/**
 * binary_tree_postorder - This Traverses a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the new_tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *new_tree, void (*func)(int))
{
	if (new_tree && func)
	{
		binary_tree_postorder(new_tree->left, func);
		binary_tree_postorder(new_tree->right, func);
		func(new_tree->n);
	}
}
