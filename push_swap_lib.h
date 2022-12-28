/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_lib.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:30:04 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/12/19 18:35:51 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_LIB_H
# define PUSH_SWAP_LIB_H

# include "libft/libft.h"

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
	int				index;

}	t_stack;
void	ft_listadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_listlast(t_stack *lst);
void	checkalpha(char *str);
void	exit_error(void);
void	checkrepeat(t_stack *stack, int size);
void	printstack(t_stack *stack);
int		notempty(char **str);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
int		ft_listsize(t_stack *lst);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	pa(t_stack **stack_b, t_stack **stack_a);
void	pa_all(t_stack **stack_b, t_stack **stack_a);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);
int		a_shorted(t_stack *stack);
int		*setarray(t_stack *stack, int size, int *array);
int		returnmin(int size, int *array);
void	indexarray(t_stack *stack);
int		isindexed(int size, int *array);
int		*indexarray2(int *array, int size);
void	short_stack(t_stack **stack_a, t_stack **stack_b);
void 	short_big(t_stack **stack_a, t_stack **stack_b, int size);
void 	short_3(t_stack **stack_a, t_stack **stack_b);
void 	short_4(t_stack **stack_a, t_stack **stack_b);
void 	short_5(t_stack **stack_a, t_stack **stack_b);
#endif