/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   graph.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/19 18:40:06 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/23 12:25:25 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

#ifndef GRAPH_H
# define GRAPH_H

typedef enum	e_bool
{
	false,
	true
}				Bool;

/* Définition d'un noeud (sommet)*/
typedef struct	NodeListElement
{
	int		value;
	struct	NodeListElement *next;
}				NodeListElement, *NodeList;

/*Definition d'un noeud d'adjacence*/
typedef struct	AdjencyListElement // Liste de sommets sur lesquels on peut aller
{
	NodeListElement *begin;
}				AdjencyListElement, *AdjencyList;

/*Definition d'un graphe*/
typedef struct GraphElement
{
	Bool		is_oriented; // oriente ou non
	int			nb_vertices; // Sommets
	AdjencyList	tab_neighbours; //Voisins
	FILE		*graph_file;
}GraphElement, *Graph;

/*Prototypes */
Graph		new_graph(int vertices, Bool is_oriented);
Bool		is_empty_graph(Graph g);
NodeList	add_node(int x);
void		add_edge(Graph g, int src,int dest);
void		erase_graph(Graph g);
void		print_graph(Graph g);
void		display_graph(Graph g);

#endif
