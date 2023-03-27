#include "main.h"

/**
*create function to change valuer a and b
*
*pionter *a and *b
*change tmp
*
*/

void swap_int(int *a, int *b){
	int tmp;

	tmp=0;

	tmp=*a;
	*a=*b;
	*b=tmp;
}
