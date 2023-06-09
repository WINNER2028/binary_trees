#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @newtree: pointer to root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *newtree)
{
	size_t nodes = 0;

	if (newtree)
	{
		nodes += (newtree->left || newtree->right) ? 1 : 0;
		nodes += binary_tree_nodes(newtree->left);
		nodes += binary_tree_nodes(newtree->right);
	}
	return (nodes);
}
