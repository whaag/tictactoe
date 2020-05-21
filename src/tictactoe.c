/**
 * Author: Eduardo Athayde
 * Date: May 2020
 * Purpose: Main loop
 * Language: C
 */

#include <stdio.h>
#include <stdlib.h>
#include "setup.h"
#include "response.h"

int main(void) {
  puts("Starting");
  
  Response response = initialise();
  
  if (response.code != 0) {
    return EXIT_FAILURE;
  }

  puts("All good here");
  
  cleanUp();

  return EXIT_SUCCESS;
}
