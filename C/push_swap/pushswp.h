#define PUSHSWP_H
#ifdef PUSHSWP_H

# include "libft/libft.h"
# include <stdlib.h>

typedef struct	s_general
{
	int argc;
	char **argv;
	t_list *a;
	t_list *b;
}				t_general;

typedef struct	s_stack
{
	int	num;
}				t_stack;

/*
** Main Functions
*/

char	push_swap(int argc, char **argv);
void	pushswp(int argc, int *a, int *b);

/*
** Operator Functions
*/

void	rotate(t_list	**lst, int size);
void	swap(t_list	**lst);
void	push(t_list	**src, t_list	**dst);

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

void	solve2(t_list *lst);
// void	solve_3(int *a);

#endif