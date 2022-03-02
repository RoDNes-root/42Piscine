/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:46:21 by btapan            #+#    #+#             */
/*   Updated: 2022/02/17 02:14:01 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	swap;

	a = 0;
	while (a < size -1)
	{
		while (tab[a] > tab[a + 1])
		{
			swap = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = swap;
			a = 0;
		}
		a++;
	}
}
/*int	main(void)
{
	int	tab[] = {10, 7, 8, 9, 1, 3, 2, 0 };
	int	size;

	size = 8;
	int i = 0;
	while (i <= size-1)
	{
		printf("Normal:%d ", tab[i]);
		i++;
	}
	i = 0;
	ft_sort_int_tab(tab,size);
	while (i <= size-1)
	{
		printf("Degışen:%d ", tab[i]);
		i++;
	}
}*/
