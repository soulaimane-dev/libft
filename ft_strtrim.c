/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:52:47 by sbouabid          #+#    #+#             */
/*   Updated: 2023/11/03 22:50:20 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char s1, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (s1 == NULL || set == NULL)
		return (NULL);
	if (*s1 == '\0')
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	start = 0;
	end = ft_strlen(s1) - 1;
	while (check_set(s1[start], (char *)set) == 1)
		start++;
	while (check_set(s1[end], (char *)set) == 1)
		end--;
	str = ft_substr(s1, start, end - start + 1);
	return (str);
}
