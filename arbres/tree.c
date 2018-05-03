
#include "tree.h"

void	print_prefix(Tree *tr)
{
	if (!tr)
		return ;
	if (tr->parent)
		printf("(%d) -> (%d)\n", tr->parent->value, tr->value);
	else
		printf("(%d)\n", tr->value);
	if (tr->right)
		print_prefix(tr->right);
	if (tr->left)
		print_prefix(tr->left);

}

Tree	*new_tree(int x)
{
	Tree *tr;

	tr = malloc(sizeof(*tr));
	tr->value = x;
	tr->left = NULL;
	tr->right = NULL;
	tr->parent = NULL;

	return tr;
}


Tree	*join_tree(Tree *left, Tree *right, int node)
{
	Tree	*tr = new_tree(node);

	tr->left = left;
	tr->right = right;
	if (left)
		left->parent = tr;
	if (right)
		right->parent = tr;
	return (tr);
}

int		count_tree_nodes(Tree *tr)
{
	if (!tr)
		return (0);
	return (count_tree_nodes(tr->left) + count_tree_nodes(tr->right) + 1);
}

void	clean_tree(Tree *tr)
{
	if (!tr)
		return ;

	clean_tree(tr->left);
	clean_tree(tr->right);
	printf("Suppr %d\n", tr->value);
	free(tr);
}
