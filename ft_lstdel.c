#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;
	t_list	*lst;

	lst = *alst;
	while (lst != NULL)
	{
		tmp = lst->next;
		del(lst, lst->content_size);
		lst = tmp;
	}
	*alst = NULL;
}
