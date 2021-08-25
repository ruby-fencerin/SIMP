#include <SDL2/include/SDL.h>

#undef main
#pragma comment(lib, "SDL2")


int main(int argc, char** argv){

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window* window = SDL_CreateWindow("window", 0, 0, 1280, 720, 0);
	SDL_Delay(100000);
	SDL_Quit();

	return 0;
}