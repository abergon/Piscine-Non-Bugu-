/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 18:54:24 by abergon           #+#    #+#             */
/*   Updated: 2017/08/14 16:31:07 by abergon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int		ft_iterative_factorial(int nb)
{
	int i;
	int j;

	i = 1;
	while (i != nb)
	{
		i++;
		j = (i) * (i);
	}
	ft_putchar(i);
	ft_putchar(j);
	return (0);
}
int main ()
{
	ft_iterative_factorial(5);
	return (0);
}
