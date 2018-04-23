/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   graph.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/19 19:34:19 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/23 12:50:13 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "graph.h"

void		erase_graph(Graph g)
{
	NodeList n;
	NodeList tmp;
	int i;
	
	if (is_empty_graph(g))
		return ;
	if (g->tab_neighbours)
	{
		i = 0;
		while (++i <= g->nb_vertices)
		{
			n = g->tab_neighbours[i - 1].begin;
			while (n != NULL)
			{
				tmp = n;
				n = n->next;
				free(tmp);
			}
		}
		free(g->tab_neighbours);
	}
	fprintf(g->graph_file, "}\n");
	fclose(g->graph_file);
	free(g);
}

NodeList	add_node(int x)
{
	NodeList n;

	n = malloc(sizeof(NodeListElement));
	n->value = x;
	n->next = NULL;
	return (n);
}

Bool	is_empty_graph(Graph g)
{
	if (g == NULL)
		return (true);
	return (false);
}

void		add_edge(Graph g, int src,int dest)
{
	// Oriente
	NodeList n;

	if (src > g->nb_vertices || dest > g->nb_vertices)
		return ;
	n = add_node(dest);
	n->next = g->tab_neighbours[src - 1].begin;
	g->tab_neighbours[src - 1].begin = n;
	// Non oriente
	if (!g->is_oriented)
	{
		n = add_node(src);
		n->next = g->tab_neighbours[dest - 1].begin;
		g->tab_neighbours[dest - 1].begin = n;
	}
	if (g->is_oriented)
		fprintf(g->graph_file, "\t%d -> %d;\n", src, dest);
	else
		fprintf(g->graph_file, "\t%d -- %d;\n", src, dest);
}

void		print_graph(Graph g)
{
	NodeList n;
	int i;

	i = 0;
	while (++i <= g->nb_vertices)
	{
		n = g->tab_neighbours[i - 1].begin;
		printf("(%d) : ", i);
		while (n != NULL)
		{
			printf("%d, ", n->value);
			n = n->next;
		}
		printf("NULL\n");
	}
}

void		display_graph(Graph g)
{
	if (g->is_oriented)
		system("dot digraph.out");
	else
		system("dot graph.out");
}

Graph		new_graph(int vertices, Bool is_oriented)
{
	int i;
	GraphElement *elem;

	i = 0;
	if (!(elem = malloc(sizeof(*elem))))
		return (0);
	elem->is_oriented = is_oriented;
	elem->nb_vertices = vertices;
	elem->tab_neighbours = malloc(vertices * sizeof(AdjencyListElement));
	while (++i <= vertices)
		elem->tab_neighbours[i - 1].begin = NULL;
	if (elem->is_oriented)
		elem->graph_file = fopen("digraph.out", "w");
	else
		elem->graph_file = fopen("graph.out", "w");
	if (!elem->graph_file)
		exit(EXIT_FAILURE);
	if (elem->is_oriented)
		fprintf(elem->graph_file, "digraph my_graph\n{\n");
	else
		fprintf(elem->graph_file, "graph my_graph\n{\n");
	return (elem);
}
