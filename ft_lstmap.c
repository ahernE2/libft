/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:47:40 by alejhern          #+#    #+#             */
/*   Updated: 2024/06/23 17:00:37 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	map;
	t_list	node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	map = NULL;
	while (lst)
	{
		content = f(lst-> content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			fr_lstclear(&map, *del);
			return (NULL);
		}
		ft_lstadd_back(&map, node);
		lst = lst-> next;
	}
	return (map);
}
