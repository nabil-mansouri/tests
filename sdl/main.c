/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nerahmou <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/23 16:04:05 by nerahmou     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/26 16:52:54 by nerahmou    ###    #+. /#+    ###.fr     */
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
	/*SDL_Rect	rectangle;
	int done = 0;
	window = NULL;
	renderer = NULL;
	rectangle.x = 20;
	rectangle.y = 20;
	rectangle.w = 20;
	rectangle.x = 15;
*/
	if (SDL_Init(SDL_INIT_VIDEO))
		exit(EXIT_FAILURE);
	window =SDL_CreateWindow("SDL2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			                              640, 480, SDL_WINDOW_ALLOW_HIGHDPI);
	SDL_Delay(3333);
	/*renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_RenderPresent(renderer);
	while (!done)
	{
		SDL_WaitEvent(&events);

		if (events.window.event == SDL_WINDOWEVENT_CLOSE)
			done = 1;
	}
*/	
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;
}
