/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:20:04 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/12/19 19:09:33 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_lib.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		split_args(t_stack **stack, char *argv);
void	add_to_list(t_stack **stack, int num);
void	ft_listadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_listlast(t_stack *lst);

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		i;
	int		size;

	size = 0;
	i = 0;
	stack_a = 0;
	stack_b = 0;
	if (argc == 1)
		return (0);
	if (argc > 1)
	{
		while (argv[++i])
		{
			if (notempty(argv) == 0)
				exit_error();
			size += split_args(&stack_a, argv[i]);
		}
	}
	checkrepeat(stack_a, size);
	if (a_shorted(stack_a))
		return (0);
	indexarray(stack_a);
	printstack(stack_a);
}

int	split_args(t_stack **stack, char *argv)
{
	char		**str;
	int			i;
	long int	num;

	i = -1;
	str = ft_split(argv, ' ');
	while (str[++i])
	{
		checkalpha(str[i]);
		num = ft_atoi(str[i]);
		if (num > 2147483647 || num < -2147483648)
		{
			free(str);
			exit_error();
		}
		add_to_list(stack, ft_atoi(str[i]));
	}
	return (free(str), i);
}

void	add_to_list(t_stack **stack, int num)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	new->num = num;
	new->next = NULL;
	ft_listadd_back(stack, new);
}
