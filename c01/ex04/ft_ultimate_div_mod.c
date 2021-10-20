/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moh <moh@firestar9390@gmail.co>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:32:39 by moh               #+#    #+#             */
/*   Updated: 2021/10/18 23:59:48 by moh              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divide;
	int	mod;

	divide = *a / *b;
	mod = *a % *b;
	*a = divide;
	*b = mod;
}
