/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:28:55 by ^@^ Foxan ^@^     #+#    #+#             */
/*   Updated: 2022/11/02 12:28:57 by ^@^ Foxan ^@^    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	int		nb;
	int		b;
	char	c;

	b = 0;
	if (n == -2147483648)
	{
		write(fd, "-", 1);
		n = -(n + ++b);
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	nb = n / 10;
	if (nb != 0)
		ft_putnbr_fd(nb, fd);
	c = '0' + n % 10 + b;
	write (fd, &c, 1);
}
