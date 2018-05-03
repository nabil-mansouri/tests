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
#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	display(Stack list)
{
	if (!list)
		return ;
	printf("[%d] --> ", list->value);
	display(list->next);
}

Stack	new_stack()
{
	return NULL;
}


Boolean is_empty(Stack sta)
{
	if (sta == NULL)
		return 1;
	return 0;
}

Stack push_stack(Stack *sta, int x)
{
	Stack elem;

	elem = malloc(sizeof(*elem));
	elem->value = x;
	elem->next = *sta;
	return (elem);
}

Stack pop_stack(Stack sta)
{
	Stack elem;

	if (is_empty(sta))
		return NULL;
	elem = sta->next;
	free (sta);
	return (elem);
}

Stack	clear(Stack sta)
{
	while (!is_empty(sta))
		sta = pop_stack(sta);
	return (new_stack());
}

int	sta_length(Stack sta)
{
	int length;

	length = 0;
	while (sta)
	{
		length++;
		sta = sta->next;
	}
	return (length);
}
int main(int argc, const char *argv[])
{
	Stack sta = new_stack();
	sta = push_stack(&sta, 10);
	sta = push_stack(&sta, 15);
	printf("%d",sta_length(sta));
	display(sta);
	return 0;
}
