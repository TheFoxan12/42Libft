/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:01:35 by ^@^ Foxan ^@^     #+#    #+#             */
/*   Updated: 2022/11/01 10:01:37 by ^@^ Foxan ^@^    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dst, const char *src, unsigned int dstsize)
{
	unsigned int	srcsize;
	unsigned int	dstlen;
	unsigned int	i;

	srcsize = 0;
	while (src[srcsize] != 0)
		srcsize++;
	dstlen = 0;
	while (dst[dstlen] != 0)
		dstlen++;
	i = 0;
	if (dstsize > dstlen)
	{
		while (i < dstsize - dstlen - 1 && src[i] != 0)
		{
			dst[i + dstlen] = src[i];
			i++;
		}
		dst[i + dstlen] = '\0';
	}
	if (dstsize < dstlen)
		return (srcsize + dstsize);
	return (srcsize + dstlen);
}
