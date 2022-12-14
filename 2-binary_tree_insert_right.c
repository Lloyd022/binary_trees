#include "binary_trees.h"

/**
 * create_node - creates a new node to be inserted
 * @parent: pointer to the parent
 * @value: value to be stored in the new node
 * Return: the new node
 */
binary_tree_t *create_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = newNode->right = NULL;
	newNode->parent = parent;

	return (newNode);
}

/**
 * binary_tree_insert_right - inserts a node as a right child
 * @parent: pointer to the parent node
 * @value: the value to be assigned to the newNode
 * Return: newNode on success, else return NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	right_node = create_node(parent, value);

	if (parent->right != NULL)
	{
		right_node->right = parent->right;
		right_node->right->parent = right_node;
	}
	parent->right = right_node;
	return (right_node);
}
