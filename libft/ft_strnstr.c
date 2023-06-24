/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:16:51 by ^@^ Foxan ^@^     #+#    #+#             */
/*   Updated: 2022/11/01 11:16:53 by ^@^ Foxan ^@^    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *haystack, const char *needle, unsigned int len)
{
	unsigned int	i;
	int				trouve;
	unsigned int	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	trouve = 0;
	while (trouve == 0 && i < len && haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (needle[j] != '\0' && i + j < len && haystack[i + j] != '\0'
				&& haystack[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				trouve = 1;
		}
		i++;
	}
	if (trouve == 1)
		return ((char *)&haystack[i - 1]);
	return (0);
}
