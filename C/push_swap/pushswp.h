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

/*
** Operator Functions
*/

void	rotate(t_list	**lst, int size);
void	swap(t_list	**lst);
void	push(t_list	**src, t_list	**dst);

/*
** Helper Functions
*/

int	parse(char **str);

/*
** Solver Functions
*/

#endif