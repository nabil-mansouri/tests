/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/23 16:04:05 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/23 19:50:35 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	SDL_Window	*window;
	SDL_Renderer *renderer;

	window = NULL;
	renderer = NULL;
	if (SDL_Init(SDL_INIT_VIDEO))
	{
		SDL_Log("ERREUR : Initialisation SDL > %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}

	window = SDL_CreateWindow("Nessman",
			SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,  800, 600, 0);
	
	if (!window)
	{
		SDL_Log("ERREUR : Creation fenetre > %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
	if (!renderer)
	{
		SDL_Log("ERREUR : Rendu > %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
	SDL_RenderPresent(renderer);
	SDL_RenderClear(renderer);
	
	SDL_Delay(6000);

	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	
	SDL_Quit();
	return 0;
}
