/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btapan <btapan@student.42kocaeli.com.tr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:29:05 by btapan            #+#    #+#             */
/*   Updated: 2022/03/02 17:30:06 by btapan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		bound;
	int		index;
	int		*buffer;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	bound = max - min;
	buffer = malloc(bound * sizeof(int));
	if (!buffer)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	index = 0;
	while (index < bound)
	{
		buffer[index] = min + index;
		index++;
	}
	return (bound);
}
