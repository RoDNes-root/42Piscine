/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 02:25:34 by btapan            #+#    #+#             */
/*   Updated: 2022/02/13 05:07:17 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	yuzler;
	int	onlar;
	int	birler;

	yuzler = '0';
	while (yuzler <= '7')
	{
		onlar = yuzler + 1;
		while (onlar <= '8')
		{
			birler = onlar + 1;
			while (birler <= '9')
			{
				write(1, &yuzler, 1);
				write(1, &onlar, 1);
				write(1, &birler, 1);
				if (yuzler != '7' || onlar != '8' || birler != '9')
					write(1, ", ", 2);
				birler++;
			}
			onlar++;
		}
		yuzler++;
	}
}

int main(void)
{
	ft_print_comb();
	return 0;
}
