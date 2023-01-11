/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:08:25 by xalbizu-          #+#    #+#             */
/*   Updated: 2023/01/11 19:48:45 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"

int	*setarray(t_stack *stack, int size, int *array)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		array[i] = stack->num;
		stack = stack->next;
	}
	return (array);
}

void	indexarray(t_stack *stack)
{
	int		i;
	int		*array;
	int		size;
	t_stack	*aux;

	aux = stack;
	size = ft_listsize(stack);
	array = malloc(size * sizeof(int));
	array = setarray(stack, size, array);
	array = indexarray2(array, size);
	i = -1;
	while (++i < size)
	{
		array[i] += 2147483648;
		aux->index = array[i];
		aux = aux->next;
	}
	free(array);
}

int	*indexarray2(int *array, int size)
{
	int	i;
	int	num;
	int	min;
	int	min_index;

	num = -2147483648;
	while (!isindexed(size, array))
	{
		min_index = 0;
		min = 2147483647;
		i = -1;
		while (++i < size)
		{
			if (array[i] <= min && array[i] >= num)
			{
				min_index = i;
				min = array[i];
			}
		}
		array[min_index] = num;
		num++;
	}
	return (array);
}

int	isindexed(int size, int *array)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (array[i] >= -2147483648 + size)
			return (0);
	}
	return (1);
}

int	returnmin(int size, int *array)
{
	int	i;
	int	min;

	min = 2147483647;
	i = -1;
	while (++i < size)
	{
		if (array[i] < min)
			min = array[i];
	}
	return (min);
}
