/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 19:51:47 by xalbizu-          #+#    #+#             */
/*   Updated: 2023/01/11 19:51:53 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"
#include <unistd.h> 

void	push(t_stack **st_src, t_stack **st_dest)
{
	t_stack	*aux;

	if (st_src == 0)
		return ;
	aux = *st_src;
	*st_src = (*st_src)->next;
	aux->next = *st_dest;
	*st_dest = aux;
}

void	pa(t_stack **stack_b, t_stack **stack_a)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}

void	pa_all(t_stack **stack_b, t_stack **stack_a)
{
	while (*stack_b != NULL)
		pa(stack_b, stack_a);
}
