/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 15:53:51 by abergon           #+#    #+#             */
/*   Updated: 2017/08/07 21:28:31 by abergon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
			gitgud(a);
			ft_putchar(' ');
			gitgud(b);
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
