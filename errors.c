/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:26:48 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/11/07 20:26:32 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap_lib.h"
#include <unistd.h>

void	checkrepeat(t_stack *stack, int size)
{
	int		*nums;
	int		i;
	int		j;
	t_stack	*aux;

	aux = stack;
	i = -1;
	j = -1;
	nums = malloc(size * sizeof(int));
	while (aux->next != NULL)
	{
		nums[++i] = aux->num;
		aux = aux->next;
	}
	nums[++i] = aux->num;
	i = -1;
	while (++i < size)
	{
		j = i;
		while (++j < size)
			if (nums[j] == nums[i])
				exit_error();
	}
	free(nums);
}

int	notempty(char **str)
{
	int i;
	int j;

	j = -1;
	i = 0;
	while (str[++i])
	{
		while (str[i][++j] != '\0')
		{
			if (ft_isdigit(str[i][j]))
				return(1);
		}
		j = -1;
	}
	return(0);
}

void	checkalpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			exit_error();
	}
}

void	exit_error(void)
{
	write(1, "Error\n", 7);
	exit(1);
}
