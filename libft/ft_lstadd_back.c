#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (new)
	{
		p = *lst;
		if (!p)
			*lst = new;
		else
		{
			while (p->next)
				p = p->next;
			p->next = new;
		}
	}
}
