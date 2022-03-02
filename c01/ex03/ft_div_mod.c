/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:55:03 by btapan            #+#    #+#             */
/*   Updated: 2022/02/16 20:16:22 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
  int	main()
{
	int	a = 10;
	int	b = 20;
	int	*div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);

	printf("A'nın degeri : %d",*div);
	printf("\nB'nin degeri : %d",*mod);
}
*/
