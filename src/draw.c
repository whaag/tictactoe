/**
 * Author: Eduardo Athayde
 * Date: May 2020
 * Purpose: Draws to the screen
 * Language: C
 */

#include <SDL2/SDL.h>
#include "draw.h"

#define WINDOW_WIDTH 1280
#define WINDOW_HEIGHT 1024

SDL_Window* window;

Response initialiseDraw() {
  Response response;
  
  window = SDL_CreateWindow("Titactoe",
                            SDL_WINDOWPOS_CENTERED,
                            SDL_WINDOWPOS_CENTERED,
                            WINDOW_WIDTH,
                            WINDOW_HEIGHT,
                            0);
  if (window) {                          
    response.code = 0;
    puts("Window initalised succsessfuly");
  } else {
    response.code = 9;
    strcpy(response.message, "Error initialising Window");
    fprintf(stderr, "%s \n", SDL_GetError());
  }
  
  return response;
}

void cleanUpDraw() {
  SDL_DestroyWindow(window);
}
  
