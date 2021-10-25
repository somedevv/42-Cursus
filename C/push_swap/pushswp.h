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
void	savetolist(t_list **lst, int argc, char **argv);
void	freestr(char **str);
int	init(char **argv, int argc, t_list *a);

/*
** CHECKER FUNCTIONS
*/

int	checkdupp(t_list *a);
int check(t_list *a, int num);

/*
** Solver Functions
*/

/*
** TO ERASE
*/

// void	ft_lstiter2(t_stack *lst, void (*f)(int ));
// t_stack	*ft_lstlast2(t_stack *lst);
// void	ft_lstadd_back2(t_stack **lst, t_stack *new);
// t_stack	*ft_lstnew2(int content);
// int	ft_lstsize2(t_stack *lst);
void printlist(void *a);

#endif