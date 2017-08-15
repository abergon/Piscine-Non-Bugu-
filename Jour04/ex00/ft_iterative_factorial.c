/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/13 18:54:24 by abergon           #+#    #+#             */
/*   Updated: 2017/08/15 02:50:22 by abergon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while(i < nb)
	{
		i++;
		i = i * i;
	}
	return (i);
}

int		main()
{
	ft_iterative_factorial(5);
	return (0);
}
