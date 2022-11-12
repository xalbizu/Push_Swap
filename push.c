/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:07:45 by marvin            #+#    #+#             */
/*   Updated: 2022/11/12 14:07:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"
#include <stdio.h>

void push(t_stack **st_src, t_stack **st_dest)
{
    t_list *aux;

    if (st_src == 0)
        return ;
    aux = *st_src;
    *st_src = (*st_src)->next;
    aux->next = *st_dest;
    *st_dest = aux;
}

void pa(t_stack **stack_a, t_stack **stack_b)
{
    push(stack_b, stack_a);
    write(1, "pa\n", 3);
}

void pb(t_stack **stack_a, t_stack **stack_b)
{
    push(stack_a, stack_b);
    write(1, "pb\n", 3);
}