/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 07:37:08 by btapan            #+#    #+#             */
/*   Updated: 2022/02/17 07:37:18 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < '0') || (str[c] > '9'))
			return (0);
		c++;
	}
	return (1);
}
/*int	main(void)
{
	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("%d", ft_str_is_numeric(p_emp));

	return 0;
}
*/
