/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 15:53:51 by abergon           #+#    #+#             */
/*   Updated: 2017/08/06 20:08:55 by abergon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

intft_	putchar (char c);

int		gitgud(int z)
{
	int a;
	int b;

	a = z / 10;
	b = z % 10;
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	return (0);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			gitgud(b);
			write(1, " ", 1);
			gitgud(a);
			if (a < 98 && b <= 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
