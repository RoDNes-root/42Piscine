/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:40:24 by btapan            #+#    #+#             */
/*   Updated: 2022/02/17 02:35:39 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	gecici;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		gecici = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size - 1 - i] = gecici;
		i++;
	}
}

/*int	main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size;
	size = 5;
	int i = 0;

	ft_rev_int_tab(tab,size);
	while (i <= size-1)
	{
		printf("Değişen;%d \n",tab[i]);
		i++;
	}

}*/
