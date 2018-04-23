/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   nuklear.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/23 13:24:21 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/23 15:43:46 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#define NK_IMPLEMENTATION
#include "lib/nuklear.h"
#include "lib/src/nuklear.h"

void	test()
{
	struct nk_context ctx;
	const struct nk_user_font font;
	nk_init_default(&ctx, &font);
}

int main(int argc, const char *argv[])
{
	test();
	return 0;
}
