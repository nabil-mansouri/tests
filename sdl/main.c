/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/23 16:04:05 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/24 12:32:54 by nerahmou    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <SDL2/SDL.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	SDL_Window	*window;
	SDL_Renderer *renderer;
	SDL_Event        events;
	int done = 0;				
	window = NULL;
	renderer = NULL;
	if (SDL_Init(SDL_INIT_VIDEO))
	{
		SDL_Log("ERREUR : Initialisation SDL > %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}

	window = SDL_CreateWindow("Nessman", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_RESIZABLE);
/*	{
		SDL_Log("ERREUR : Creation fenetre > %s\n", SDL_GetError());
		exit(EXIT_FAILURE);
	}
	while (!done)
	{
		SDL_WaitEvent(&events);

		if (events.window.event == SDL_WINDOWEVENT_CLOSE)
			done = 1;
	}
	*/
	while (!done)
		SDL_WaitEvent(&events);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);

	SDL_Quit();
	return 0;
}
