/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:54:11 by ^@^ Foxan ^@^     #+#    #+#             */
/*   Updated: 2022/11/01 14:54:14 by ^@^ Foxan ^@^    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(unsigned int count, unsigned int size)
{
	unsigned int	i;
	void			*ad;

	ad = malloc(count * size);
	if (ad == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		*((char *)&ad[i]) = 0;
		i++;
	}
	return (ad);
}
