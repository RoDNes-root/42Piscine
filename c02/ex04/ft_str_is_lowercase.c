/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 07:43:24 by btapan            #+#    #+#             */
/*   Updated: 2022/02/17 07:43:36 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'a') || (str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}
/*
int	main(void)
{
	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("%d", ft_str_is_lowercase(p_emp));

	return 0;
}
*/
