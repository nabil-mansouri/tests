/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   graph.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/19 19:34:19 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/19 20:06:21 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "graph.h"

void		add_edge(Graph g, int src,int dest)
{
	// Oriente
	NodeList n;

	n = add_node(dest);
	n->next = g->tab_neighbours[src - 1].begin;
}

void		erase_graph(Graph g)
{
	if (is_empty_graph(g))
		return ;

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

Graph new_graph(int vertices, Bool is_oriented)
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
}
