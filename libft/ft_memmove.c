/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:12:28 by ^@^ Foxan ^@^     #+#    #+#             */
/*   Updated: 2022/11/01 14:12:29 by ^@^ Foxan ^@^    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned int	i;
	int				r;

	if (dst == 0 && src == 0)
		return (dst);
	if (src < dst && dst < src + len)
	{
		r = -1;
		i = len - 1;
	}
	else
	{
		r = 1;
		i = 0;
	}
	while (0 <= i && i < len)
	{
		*((char *)&dst[i]) = *((char *)&src[i]);
		i += r;
	}
	return (dst);
}
