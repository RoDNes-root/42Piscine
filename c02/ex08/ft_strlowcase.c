/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:40:53 by btapan            #+#    #+#             */
/*   Updated: 2022/02/21 11:22:52 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] >= 'A') && (str[c] <= 'Z'))
		{
			str[c] += 32;
		}
		c++;
	}
	return (str);
}

/*int	main(void)
{

	char	str[] = "BU BIR DENEME YAZISI";
	printf("%s", ft_strlowcase(str));
}*/
