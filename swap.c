/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.32.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:23:33 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/11/09 17:58:25 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "push_swap_lib.h"

void	swap(t_stack **stack)
{
	t_stack	*aux;
	int		num;

	aux = *stack;
	if (ft_listsize(aux) <= 1)
		return ;
	num = aux->num;
	aux->num = aux->next->num;
	aux->next->num = num;
}

void	sa(t_stack **stack_a)
{
	write(1, "sa\n", 3);
	swap(stack_a);
}

void	sb(t_stack **stack_b)
{
	write(1, "sb\n", 3);
	swap(stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	write(1, "ss\n", 3);
	swap(stack_a);
	swap(stack_b);
}
