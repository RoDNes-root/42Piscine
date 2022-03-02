/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:59:25 by btapan            #+#    #+#             */
/*   Updated: 2022/02/16 23:40:02 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tut;

	if (*b != 0)
	{
		tut = *a;
		*a /= *b;
		*b = tut % *b;
	}
}
/*int	main(void)
{
	int	i = 10;
	int	j = 5;
	int	*a = &i;
	int	*b = &j;

	printf("%d /",i);
	printf(" %d\n",j);

	ft_ultimate_div_mod(a, b);
	
	printf("div (*a) = %d\n",*a);
	printf("mod (*b) = %d", *b);
}*/
