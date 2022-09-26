/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:20:04 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/09/26 17:55:39 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	int		i;

	stack_a = (t_stack *)malloc(sizeof(t_stack));
	stack_a->next = NULL;
	if (argc > 1)
	{
		i = 0;
		while (++i < argc)
			arg_to_stack(&stack_a, argv[i]);
		printstack(stack_a);
	}
}

void	arg_to_stack(t_stack **stack_a, char *argv)
{
	int		i;
	t_stack	*new;

	i = 0;
	while (argv[i])
	{
		if (argv[i] <= '9' && argv[i] >= '0')
		{
			new = (t_stack *)malloc(sizeof(t_stack));
			new->num = argv[i] - '0';
			while (argv[i + 1] <= '9' && argv[i + 1] >= '0')
			{
				i++;
				new->num *= 10;
				new->num += argv[i] - '0';
			}
			new->next = NULL;
			ft_lstadd_back(stack_a, new);
		}
		i++;
	}
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!(*lst))
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}

t_stack	*ft_lstlast(t_stack *lst)
{
	while (lst)
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (NULL);
}
