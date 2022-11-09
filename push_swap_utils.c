/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:23:29 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/11/09 17:37:18 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	ft_listadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!(*lst))
		*lst = new;
	else
	{
		last = ft_listlast(*lst);
		last -> next = new;
	}
}

t_stack	*ft_listlast(t_stack *lst)
{
	while (lst)
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (NULL);
}

void	printstack(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp->next != NULL)
	{
		printf("%d\n", tmp->num);
		tmp = tmp->next;
	}
	printf("%d\n", tmp->num);
}

int	ft_listsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}