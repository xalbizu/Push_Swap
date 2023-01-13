/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:49:13 by marvin            #+#    #+#             */
/*   Updated: 2023/01/13 17:28:40 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	short_5(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->index == 1 && (*stack_a)->next->index
		== 3 && (*stack_a)->next->next->index == 0
		&& (*stack_a)->next->next->next->index == 4)
	{
		special_3(stack_a, stack_b);
		return ;
	}
	if ((*stack_a)->next->index == 4)
		ra(stack_a);
	else if ((*stack_a)->next->next->index == 4)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->next->next->next->index == 4)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->next->next->next->next->index == 4)
		rra(stack_a);
	pb(stack_a, stack_b);
	short_4(stack_a, stack_b);
	pa(stack_b, stack_a);
	ra(stack_a);
}

void	short_4(t_stack **stack_a, t_stack **stack_b)
{
	if (a_shorted(*stack_a))
		return ;
	if ((*stack_a)->next->index == 3)
		ra(stack_a);
	else if ((*stack_a)->next->next->index == 3)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if ((*stack_a)->next->next->next->index == 3)
		rra(stack_a);
	pb(stack_a, stack_b);
	short_3(stack_a);
	pa(stack_b, stack_a);
	ra(stack_a);
}

void	short_3(t_stack **stack_a)
{
	if (a_shorted(*stack_a))
		return ;
	if ((*stack_a)->index == 0)
	{
		ra(stack_a);
		sa(stack_a);
		rra(stack_a);
	}
	else if ((*stack_a)->index == 1)
	{
		if ((*stack_a)->next->index == 0)
			sa(stack_a);
		else
			rra(stack_a);
	}
	else
	{
		if ((*stack_a)->next->index == 0)
			ra(stack_a);
		else
		{
			sa(stack_a);
			rra(stack_a);
		}
	}
}

void	short_big(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	i;
	int	j;

	i = 0;
	while (!a_shorted(*stack_a))
	{
		j = -1;
		while (++j < size)
		{
			if ((*stack_a)->index >> i & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
		}
		pa_all(stack_b, stack_a);
		if (a_shorted(*stack_a))
			return ;
		i++;
	}
}

void	short_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_listsize(*stack_a);
	if ((*stack_a)->index == 3 && (*stack_a)->next->index
		== 0 && (*stack_a)->next->next->index == 4
		&& (*stack_a)->next->next->next->index == 2 && size == 5)
		special_1(stack_a, stack_b);
	else if ((*stack_a)->index == 1 && (*stack_a)->next->index
		== 2 && (*stack_a)->next->next->index == 4
		&& (*stack_a)->next->next->next->index == 0 && size == 5)
		special_2(stack_a, stack_b);
	else if (size > 5)
		short_big(stack_a, stack_b, size);
	else if (size == 2)
		sa(stack_a);
	else if (size == 3)
		short_3(stack_a);
	else if (size == 4)
		short_4(stack_a, stack_b);
	else
		short_5(stack_a, stack_b);
	free_stacks(*stack_a, *stack_b, size);
}
