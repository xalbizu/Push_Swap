/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   special_cases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:31:29 by xalbizu-          #+#    #+#             */
/*   Updated: 2023/01/13 17:33:04 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

void	special_1(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	ra(stack_a);
	pb(stack_a, stack_b);
	sa(stack_a);
	pa(stack_b, stack_a);
	rra(stack_a);
	sa(stack_a);
	ra(stack_a);
}

void	special_2(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	ra(stack_a);
	pb(stack_a, stack_b);
	sa(stack_a);
	ra(stack_a);
	pa(stack_b, stack_a);
	ra(stack_a);
}

void	special_3(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	special_1(stack_a, stack_b);
}
//30421