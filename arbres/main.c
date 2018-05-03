#include "tree.h"



int main(int argc, const char *argv[])
{
	Tree *arbre;

	arbre = join_tree(join_tree(new_tree(8), new_tree(3), 2), new_tree(4) , 6);
	print_prefix(arbre);
	printf("%d", count_tree_nodes(arbre));
	clean_tree(arbre);
	return 0;
}
