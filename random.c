#include <stdint.h> // C99 variables type

uint32_t M;

// Random number generator
// from Numerical Recipes
// by Press et al.
uint32_t Random(void){
	M = 1664525*M
	  +1013904223;
	return(M);
}
