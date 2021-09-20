#define PUSHSWP_H
#ifdef PUSHSWP_H

# include "libft/libft.h"
# include <stdlib.h>

/*
** Main Functions
*/

char	push_swap(int argc, char **argv);
void	pushswp(int argc, int *a, int *b);

/*
** Operator Functions
*/

void	rotate(t_list **stack);
void	reverse_rotate(t_list **stack);

/*
** Helper Functions
*/

int		checkstring(char **argv, int argc);
int		checkint(long long int nbr);
int		checkrepeat(int *a, int argc);
int		find_greater(int *arr, int argc);
// int		moves_to_bottom(int *arr, int nbr, int argc);
void	freestack(int *a, int *b);
int		initchecks(char **argv, int argc, int *a, int *b);

/*
** Solver Functions
*/

void	solve_2(int *a);
// void	solve_3(int *a);

#endif