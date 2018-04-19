/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/03 13:43:56 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/03 14:07:47 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


#include "ft_struct.h"
#include <stdio.h>

int main(int argc, const char *argv[])
{
	t_struct ma_struct;
	t_struct *ptr_struct;
	int *p;

	p = &ma_struct.heures; 
	ptr_struct = &ma_struct;
	ptr_struct->heures = 10;
	*p = 15;
	
	printf("%d",ma_struct.heures);
	return 0;
}
