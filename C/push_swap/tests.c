#include "pushswp.h"

void printlist(void *lista){
	printf("a: %s\n", (char *)lista);
}
void printlist2(void *lista){
	printf("b: %s\n", (char *)lista);
}

int main(int argc, char **argv){
	t_list *lst;
	t_list *lst2;

	lst2 = ft_lstnew("1");
	//ft_lstadd_back(&lst2, ft_lstnew("6"));
	lst = ft_lstnew(argv[1]);
	for(int i = 2; i < argc; i++)
		ft_lstadd_back(&lst, ft_lstnew(argv[i]));	
	printf("-----STACK ANTES-----\n"); ft_lstiter(lst, printlist); printf("\n"); ft_lstiter(lst2, printlist2);
	
	//rotate(&lst, ft_lstsize(lst) - 2); // &lst + lstsize - 2 to rotate nums in stack one place to the right (rrx) && lstsize to rotate nums in stack one place to the left (rx)
	//swap(&lst); //lst to swap first two elements in stack (sx)
	//push(&lst2, &lst); // &src, &dst to push first element in (stack x) to (stack x)

	printf("-----STACK DESPUES-----\n"); ft_lstiter(lst, printlist); printf("\n"); ft_lstiter(lst2, printlist2);
	return 0;
}
