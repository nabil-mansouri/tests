#ifndef TREE_H
# define TREE_H
#include <stdio.h>
#include <stdlib.h>

	typedef struct Tree
	{
		int value;
		struct Tree *left;
		struct Tree *right;
		struct Tree *parent;
	} Tree;

Tree	*new_tree(int x);
Tree	*join_tree(Tree *left, Tree *right, int node);
void	clean_tree(Tree *tr);
void	print_prefix(Tree *tr);
int		count_tree_nodes(Tree *tr);
#endif
