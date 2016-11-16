/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thumavu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:05:11 by thumavu           #+#    #+#             */
/*   Updated: 2016/11/14 15:05:15 by thumavu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*str;

	len = ft_strlen(s1);
	if (!(str = (char*)malloc(sizeof(*s1) * (len + 1))))
		return (NULL);
	ft_strcpy(str, s1);
	return (str);
}
