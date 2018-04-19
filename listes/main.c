/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 15:51:12 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 13:37:28 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	display(t_list *list)
{
	while (list)
	{
		printf("[%s] --> ", list->content);
		list = list->next;
	}
}

void	add_last(t_list **beginlist, char * name)
{
	t_list	*new;
	t_list	*tmp;

	new = (t_list*)malloc(sizeof(t_list));
	new->content = name;
	new->content_size = ft_strlen(name);
	new->next = NULL;
	if (*beginlist)
	{
		tmp = *beginlist;
			while (tmp->next)
			{
				tmp = tmp->next;
			}
			tmp->next  = new;
		
	}
	else
		*beginlist = new;
}

void	clear(void	*content, size_t size)
{
	ft_memdel(content);
	size = 0;
}


int main(int argc, const char *argv[])
{
	t_list *maliste;

	add_last(&maliste,"nessim");
	add_last(&maliste,"salut");
	add_last(&maliste,"geofroy");
	display(maliste);
	ft_memdel((void**)&maliste);
	display(maliste);
	return 0;
}
