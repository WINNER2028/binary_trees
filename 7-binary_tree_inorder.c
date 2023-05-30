#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through binary tree using in-order traversal.
 * @new_tree: A pointer to the root node of the tree to traversed.
 * @func: A pointer to a function to call for each new_node.
 */
void binary_tree_inorder(const binary_tree_t *new_tree, void (*func)(int))
{
	if (new_tree && func)
	{
		binary_tree_inorder(new_tree->left, func);
		func(new_tree->n);
		binary_tree_inorder(new_tree->right, func);
	}
}
