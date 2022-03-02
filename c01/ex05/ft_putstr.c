/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 20:16:45 by btapan            #+#    #+#             */
/*   Updated: 2022/02/15 17:22:39 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
void	charyaz(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		charyaz(*str);
		str++;
	}
}

/*int	main(void)
{
	char	str[] = "Merhaba, Dünya!";
	char	*p_str;

	p_str = str;
	ft_putstr(p_str);
}
*/
