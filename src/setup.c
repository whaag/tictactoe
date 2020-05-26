/**
 * Author: Eduardo Athayde
 * Date: May 2020
 * Purpose: Setups SDL2 components
 * Language: C
 */

#include <stdio.h>
#include <SDL2/SDL.h>
#include <string.h>
#include "setup.h"

Response initialise() {
  Response response;
  
  puts("before the thing");
  
  if (SDL_Init(SDL_INIT_VIDEO|SDL_INIT_TIMER) == 0) {
    response.code = 0;
    puts("SDL initalised succsessfuly");
  } else {
    response.code = 9;
    strcpy(response.message, "Error initialising SDL");
    fprintf(stderr, "%s \n", SDL_GetError());
  }
    
  return response;
}

void cleanUp() {
  SDL_Quit();
  puts("SDL is offline");
}  
