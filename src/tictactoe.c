/**
 * Author: Eduardo Athayde
 * Date: May 2020
 * Purpose: Main loop
 * Language: C
 */

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL_timer.h>
#include "setup.h"
#include "response.h"
#include "draw.h"

int main(void) {
  puts("Starting");
  
  Response response = initialise();
  
  if (response.code != 0) {
    return EXIT_FAILURE;
  }
  
  response = initialiseDraw();
  
  if (response.code != 0) {
    return EXIT_FAILURE;
  }
  
  SDL_Delay(5000);
  
  cleanUpDraw();
  cleanUp();

  return EXIT_SUCCESS;
}
