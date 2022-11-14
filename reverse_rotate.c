/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:24:47 by marvin            #+#    #+#             */
/*   Updated: 2022/11/14 16:52:42 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"
#include <unistd.h>

void	r_rotate(t_stack **stack)
{
	t_stack	*aux;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	aux = *stack;
	while ((*stack)->next->next != NULL)
		*stack = (*stack)->next;
	(*stack)->next->next = aux;
	aux = (*stack)->next;
	(*stack)->next = NULL;
	*stack = aux;
}

void	rra(t_stack **stack_a)
{
	r_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **stack_b)
{
	r_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	r_rotate(stack_a);
	r_rotate(stack_b);
	write(1, "rrr\n", 4);
}
