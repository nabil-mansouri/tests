/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_list.h                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 14:03:29 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/04 13:21:45 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#ifndef T_LIST_H 
# define T_LIST_H
	typedef enum Bool
	{
		false,
		true
	}	Boolean;
	
	typedef struct stack
	{
		int value;
		struct stack *next;
	} StackElement, *Stack;
#endif
