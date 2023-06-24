/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:28:56 by ^@^ Foxan ^@^     #+#    #+#             */
/*   Updated: 2022/11/02 10:28:58 by ^@^ Foxan ^@^    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	lenstr(const char *str);
static char			*empty(void);

char	*ft_substr(const char *s, unsigned int start, unsigned int len)
{
	char			*r;
	unsigned int	i;

	if (s[0] == '\0' || len == 0
		|| start >= lenstr(s))
		return (empty());
	if (len > lenstr(s) - start)
		len = lenstr(s) - start;
	r = malloc((len + 1) * sizeof (char));
	if (r == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] != 0 && i < len)
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

static unsigned int	lenstr(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

static char	*empty(void)
{
	char	*res;

	res = malloc(1 * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	return (res);
}
