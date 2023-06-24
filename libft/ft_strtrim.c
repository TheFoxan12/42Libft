/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ^@^ Foxan ^@^ <thibaut.unsinger@gmail.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:29:30 by ^@^ Foxan ^@^     #+#    #+#             */
/*   Updated: 2022/11/02 10:29:31 by ^@^ Foxan ^@^    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		isin(const char *set, char c);
static int		lenstr(const char *str);
static char		*empty(void);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		i;
	int		j;
	int		k;

	if (s1[0] == '\0')
		return (empty());
	i = 0;
	while (isin(set, s1[i]) && s1[i] != '\0')
		i++;
	if (s1[i] == '\0')
		return (empty());
	j = lenstr(s1) - 1;
	while (isin(set, s1[j]))
		j--;
	res = malloc((j - i + 2) * sizeof(char));
	if (res == NULL)
		return (NULL);
	k = 0;
	while (i <= j)
		res[k++] = s1[i++];
	res[k] = '\0';
	return (res);
}

static int	isin(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	lenstr(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
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
