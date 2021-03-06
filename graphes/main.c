/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/19 18:39:02 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/23 12:31:50 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "graph.h"

int main(int argc, const char *argv[])
{
	Graph g1;

	g1 = new_graph(5, false);
	
	add_edge(g1, 1, 2);
	add_edge(g1, 1, 5);
	add_edge(g1, 2, 4);
	add_edge(g1, 2, 3);
	add_edge(g1, 3, 4);
	add_edge(g1, 4, 5);

	display_graph(g1);
	
	erase_graph(g1);
	return 0;
}
