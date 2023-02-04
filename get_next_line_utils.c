/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shammouc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:24:26 by shammouc          #+#    #+#             */
/*   Updated: 2022/02/10 17:24:51 by shammouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *la_chaine, char *buff)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!la_chaine)
	{
		la_chaine = (char *)malloc(1 * sizeof(char));
		la_chaine[0] = '\0';
	}
	if (!la_chaine || !buff)
		return (NULL);
	str = malloc(sizeof(char) * ((ft_strlen(la_chaine) + ft_strlen(buff)) + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (la_chaine)
		while (la_chaine[++i] != '\0')
			str[i] = la_chaine[i];
	while (buff[j] != '\0')
		str[i++] = buff[j++];
	str[ft_strlen(la_chaine) + ft_strlen(buff)] = '\0';
	free(la_chaine);
	return (str);
}
