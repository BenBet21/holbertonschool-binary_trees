#include"binary_trees.h"
/**
 * binary_tree_node - Creates a new node for a binary tree
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *arbre;

	arbre = malloc(sizeof(binary_tree_t));

	if (arbre == NULL)
	{
		return (NULL);
	}

	arbre->n = value;
	arbre->left = NULL;
	arbre->right = NULL;
	arbre->parent = parent;

	return (arbre);
}

