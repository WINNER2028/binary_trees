#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @fig: tree root
 * Return: size of the tree or 0 if tree is NULL;
 */
size_t binary_tree_size(const binary_tree_t *fig)
{
	if (fig == NULL)
		return (0);

	return (binary_tree_size(fig->left) + binary_tree_size(fig->right) + 1);
}

/**
 * tree_is_complete - checks if tree is complete
 *
 * @fig: pointer to the tree root
 * @i: node index
 * @cnodes: number of nodes
 * Return: 1 if tree is complete, 0 otherwise
 */
int tree_is_complete(const binary_tree_t *fig, int i, int cnodes)
{
	if (fig == NULL)
		return (1);

	if (i >= cnodes)
		return (0);

	return (tree_is_complete(fig->left, (2 * i) + 1, cnodes) &&
		tree_is_complete(fig->right, (2 * i) + 2, cnodes));
}


/**
 * binary_tree_is_complete - calls to tree_is_complete function
 *
 * @apple: tree root
 * Return: 1 if tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *apple)
{
	size_t cnodes;

	if (apple == NULL)
		return (0);

	cnodes = binary_tree_size(apple);

	return (tree_is_complete(apple, 0, cnodes));
}

/**
 * check_parent - checks if parent has a greater value than its childs
 *
 * @mango: pointer to the node
 * Return: 1 if parent has a greater value, 0 otherwise
 */
int check_parent(const binary_tree_t *mango)
{
	if (mango == NULL)
		return (1);

	if (mango->n > mango->parent->n)
		return (0);

	return (check_parent(mango->left) && check_parent(mango->right));
}

/**
 * binary_tree_is_heap - checks if an input tree is a Max Binary Heap
 *
 * @tree: pointer to the root of the tree
 * Return: 1 if tree is a Max Binary Heap, 0 otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!binary_tree_is_complete(tree))
		return (0);

	return (check_parent(tree->left) && check_parent(tree->right));
}
