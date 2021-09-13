#define PUSHSWP_H
# ifdef PUSHSWP_H

#include "printf/printf.h"
#include <stdlib.h>

/*
** Main Functions
*/

char	push_swap(int argc, char **argv);

/*
** Operator Functions
*/

void	*rotate(void *dst, const void *src, size_t n);
void	*reverse_rotate(void *dst, const void *src, size_t n);

# endif