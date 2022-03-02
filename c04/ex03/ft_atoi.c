/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:17:30 by btapan            #+#    #+#             */
/*   Updated: 2022/02/27 14:47:47 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char	*str)
{
	int	i;
	int	isaret;
	int	sonuc;

	sonuc = 0;
	i = 0;
	isaret = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			isaret *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sonuc = (str[i] - '0') + (sonuc * 10);
		i++;
	}
	return (sonuc * isaret);
}

/*int	main()
{
	char str[] = "    -+++4352beyto21221";
	printf("%d", ft_atoi(str));
}*/
