/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:49:13 by marvin            #+#    #+#             */
/*   Updated: 2022/12/20 12:49:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"
/* void short_small(t_stack **stack_a, t_stack **stack_b)
{

} */

void short_big(t_stack **stack_a, t_stack **stack_b, int size)
{
	int	i;
	int j;

	i = 0;
	while (!a_shorted(*stack_a))
	{
		j = -1;
		while (++j < size)
		{
			if  ((*stack_a)->index >> i & 1)
				ra(stack_a);
			else{
				pb(stack_a, stack_b);
			}
		}
		pa_all(stack_b, stack_a);
		if (a_shorted(*stack_a))
			return ;
		i++;
	}
	
}

void short_stack(t_stack **stack_a, t_stack **stack_b)
{
	int	size;

	size = ft_listsize(*stack_a);
    if (size > 5)
        short_big(stack_a, stack_b, size);
    //else
		//short_small(stack_a, stack_b);
    
}
