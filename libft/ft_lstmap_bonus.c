/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 12:33:13 by ^@^ Foxan ^@^     #+#    #+#             */
/*   Updated: 2022/12/22 12:33:13 by ^@^ Foxan ^@^    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list;
	t_list	*tmp;
	void	*content;

	tmp = lst;
	list = NULL;
	while (tmp)
	{
		content = f(tmp->content);
		new = ft_lstnew(content);
		if (!new)
		{
			ft_lstclear(&list, del);
			del(content);
			ft_lstdelone(new, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new);
		tmp = tmp->next;
	}
	return (list);
}
