/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkhachab <nkhachab@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:37:25 by nkhachab          #+#    #+#             */
/*   Updated: 2022/11/18 21:22:44 by nkhachab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	if (!str)
		return (0);
	while (str[count])
		count++;
	return (count);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*output;
	int		i;
	int		j;

	if (!s1 && !s2)
		return (NULL);
	output = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!output)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 && s1[i] != '\0')
	{
		output[i] = s1[i];
		i++;
	}
	while (s2 && s2[j] != '\0')
		output[i++] = s2[j++];
	output[i] = '\0';
	free(s1);
	return (output);
}
