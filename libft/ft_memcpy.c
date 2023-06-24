/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 13:14:30 by ^@^ Foxan ^@^     #+#    #+#             */
/*   Updated: 2022/11/01 13:14:32 by ^@^ Foxan ^@^    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (dst);
	if (dst == 0 && src == 0)
		return (dst);
	while (i < n)
	{
		*((char *)&dst[i]) = *((char *)&src[i]);
		i++;
	}
	return (dst);
}
