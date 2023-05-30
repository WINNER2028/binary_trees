#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *         of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a right-child, the newer node
 *              takes its place and the old right-child is set as
 *              the right-child of the newer node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newer;

	if (parent == NULL)
		return (NULL);

	newer = binary_tree_node(parent, value);
	if (newer == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newer->right = parent->right;
		parent->right->parent = newer;
	}
	parent->right = newer;

	return (newer);
}
