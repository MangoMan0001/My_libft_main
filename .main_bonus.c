#include "libft.h"
#include <stdio.h>

void * addOne(void * p)
{
	void * r = malloc(sizeof(int));
	*(int*)r = *(int*)p + 1; return (r);
}

int	main(void)
{
	char	str[] = "AAABBBCCC";
	t_list *lst;

	////----ft_lstnew----////
	printf("////----ft_lstnew----////\n\n");

	lst = ft_lstnew(str);
	printf("lst->content = %s\n", (char *)lst->content);
	printf("\n");

	////----ft_lstadd_front----////
	printf("////----ft_lstadd_front----////\n\n");

	char	str2[] = "111222333";
	t_list *new = ft_lstnew(str2);

	printf("pre  lst->content = %s\n", (char *)lst->content);
	printf("pre  new->content = %s\n", (char *)new->content);
	ft_lstadd_front(&lst, new);
	printf("post lst->content = %s\n", (char *)lst->content);
	printf("post lst->next->contnt = %s\n", (char *)lst->next->content);
	printf("\n");

	////----ft_lstsize----////
	printf("////----ft_lstnsize----////\n\n");

	int		size = 0;
	t_list	*lst1 = ft_lstnew("111");
	t_list	*lst2 = ft_lstnew("222");
	t_list	*lst3 = ft_lstnew("333");
	t_list	*lst4 = ft_lstnew("444");
	t_list	*lst5 = ft_lstnew("555");
	ft_lstadd_front(&lst1, lst2);
	ft_lstadd_front(&lst2, lst3);
	ft_lstadd_front(&lst3, lst4);
	ft_lstadd_front(&lst4, lst5);
	size = ft_lstsize(lst4);
	printf("ft_lstsize = %d\n", size);
	printf("\n");

	////----ft_lstlast----////
	printf("////----ft_lstlast----////\n\n");

	lst = ft_lstlast(lst4);
	printf("ft_lstlast lst->content = %s\n", (char *)lst->content);
	printf("ft_lstlast lst->next = %p\n", lst->next);
	printf("\n");

	////----ft_lstadd_back----////
	printf("////----ft_lstadd_back----////\n\n");

	t_list	*lst6 = ft_lstnew("666");
	ft_lstadd_back(&lst4, lst6);
	lst = ft_lstlast(lst4);
	printf("ft_lstadd_back lst->content = %s\n", (char *)lst->content);
	printf("ft_lstadd_back lst->next = %p\n", lst->next);
	printf("\n");

	////----ft_lstdelone----////
	// printf("////----ft_lstdelone----////\n\n");

	// t_list	*lst7 = ft_lstnew("777");
	// ft_lstdelone(lst7, free);
	// printf("ft_lstdelone lst = %p\n", lst7);
	// printf("\n");

	////----ft_lstclear----////
	// printf("////----ft_lstclear----////\n\n");

	// t_list	*lst8 = ft_lstnew("888");
	// ft_lstadd_back(&lst4, lst8);
	// ft_lstclear(&lst4, free);
	// printf("ft_lclear lst->content = %s\n", (char *)lst4->content);
	// printf("ft_clear lst->next= %p\n", lst4->next);
	// printf("\n");

	////----ft_lstmap----////
	// printf("////----ft_lstmap----////\n\n");

	// t_list	*lst9 = ft_lstnew("999");
	// ft_lstadd_back(&lst4, lst9);
	// printf("ft_lstmap lst->content = %s\n", (char *)lst->content);
	// lst = ft_lstmap(lst4, addOne, free);
	// printf("ft_lstmap lst->content = %s\n", (char *)lst->content);
	// printf("ft_lstmap lst->next = %p\n", lst->next);
	// printf("\n");
}
