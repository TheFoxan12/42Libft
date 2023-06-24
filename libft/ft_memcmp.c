/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:04:43 by ^@^ Foxan ^@^     #+#    #+#             */
/*   Updated: 2022/11/01 15:04:44 by ^@^ Foxan ^@^    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(unsigned char *)&s1[i] == *(unsigned char *)&s2[i] && i < n - 1)
		i++;
	return (*(unsigned char *)&s1[i] - *(unsigned char *)&s2[i]);
}
