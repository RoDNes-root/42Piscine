/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:30:31 by btapan            #+#    #+#             */
/*   Updated: 2022/02/20 14:36:13 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'a') && (str[c] <= 'z'))
		{
			str[c] -= 32;
		}
		c++;
	}
	return (str);
}

/*int	main(void)
{

	char	str[] = "bu bir deneme yazisi";
	printf("%s", ft_strupcase(str));
}*/
