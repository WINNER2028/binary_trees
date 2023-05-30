#include "binary_trees.h"

/**
 * is_full_recursive - Checks if a binary tree is full recursively.
 * @newtree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *newtree)
{
	if (newtree != NULL)
	{
		if ((newtree->left != NULL && newtree->right == NULL) ||
		    (newtree->left == NULL && newtree->right != NULL) ||
		    is_full_recursive(newtree->left) == 0 ||
		    is_full_recursive(newtree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @newtree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *newtree)
{
	if (newtree == NULL)
		return (0);
	return (is_full_recursive(newtree));
}
