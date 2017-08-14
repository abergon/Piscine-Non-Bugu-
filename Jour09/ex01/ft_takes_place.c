/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abergon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 18:45:32 by abergon           #+#    #+#             */
/*   Updated: 2017/08/10 21:20:31 by abergon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h2;

	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	h2 = hour + 1;
	if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, h2);
	if (hour == 11)
		printf("%d.00 A.M. AND %d.00 P.M.\n", hour, h2);
	if (hour < 23 && hour > 12)
	{
		hour = hour - 12;
		h2 = h2 - 12;
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour, h2);
	}
	if (hour == 12)
	{
		h2 = h2 - 12;
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour, h2);
	}
	if (hour == 23)
	{
		hour = hour - 12;
		h2 = h2 - 12;
		printf("%d.00 P.M. AND %d.00 A.M.\n", hour, h2);
	}
}
