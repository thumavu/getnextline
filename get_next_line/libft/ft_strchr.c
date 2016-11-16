/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thumavu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 15:04:32 by thumavu           #+#    #+#             */
/*   Updated: 2016/11/14 15:04:36 by thumavu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pt;
	char	char_pos;

	char_pos = c;
	pt = (char*)s;
	while (*pt)
	{
		if (*pt == char_pos)
			return (pt);
		pt++;
	}
	if (*pt == char_pos)
		return (pt);
	else
		return (NULL);
}
