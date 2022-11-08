/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_lib.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xalbizu- <xalbizu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:30:04 by xalbizu-          #+#    #+#             */
/*   Updated: 2022/11/07 20:13:07 by xalbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_LIB_H
# define PUSH_SWAP_LIB_H

# include "libft/libft.h"

typedef struct s_stack
{
	int				num;

	struct s_stack	*next;
}	t_stack;
void	ft_listadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_listlast(t_stack *lst);
void	checkalpha(char *str);
void	exit_error(void);
void	checkrepeat(t_stack *stack, int size);
void	printstack(t_stack *stack);
int	notempty(char **str);

#endif