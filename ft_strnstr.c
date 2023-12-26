/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbouabid <sbouabid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:35:09 by sbouabid          #+#    #+#             */
/*   Updated: 2023/11/03 22:50:14 by sbouabid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_word(char *haystack, char *needle, size_t i, size_t len)
{
	while (i < len && *needle != '\0')
	{
		if (*haystack != *needle)
			return (0);
		haystack++;
		needle++;
		i++;
	}
	if (*needle == '\0' && i <= len)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0 || *haystack == '\0')
		return (NULL);
	i = 0;
	while (i < len && haystack[i])
	{
		if (find_word((char *)(haystack + i), (char *)needle, i, len) == 1)
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
