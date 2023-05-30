#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes thru a binary tree using pre-order traversal.
 * @new_tree: A pointer to the root node of the tree to be traversed.
 * @func: A pointer to a function to call for each new_node.
 */
void binary_tree_preorder(const binary_tree_t *new_tree, void (*func)(int))
{
	if (new_tree && func)
	{
		func(new_tree->n);
		binary_tree_preorder(new_tree->left, func);
		binary_tree_preorder(new_tree->right, func);
	}
}
