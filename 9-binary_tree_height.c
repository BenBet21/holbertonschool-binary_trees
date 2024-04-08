#include "binary_trees.h"
/**
 * binary_tree_height - Calculate the height of a binary tree.
 *
 * @tree: Pointer to the root of the binary tree.
 *
 * Description:
 * This function calculates the height of the given binary tree.
 * The height of a tree is defined as the number of levels in the tree,
 * where the level of a tree is the longest number of nodes from the
 * root to a leaf. The function recursively traverses the tree to determine
 * the height by finding the maximum height between the left subtree and
 * the right subtree at each node.
 *
 * Return:
 * The height of the tree.
 * If @tree is NULL, the function returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}
	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
	{
		return (binary_tree_height(tree->left) + 1);
	}
	return (binary_tree_height(tree->right) + 1);
}
