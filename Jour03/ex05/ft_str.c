/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 16:49:41 by abergon           #+#    #+#             */
/*   Updated: 2017/08/10 16:30:51 by abergon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char str)
{
	write(1, &str, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	str[5] = "truck"
	ft_putchar(str);
}

int		main()
{
	ft_putstr(str);
	return (0);
}
