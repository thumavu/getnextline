/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thumavu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:46:29 by thumavu           #+#    #+#             */
/*   Updated: 2016/11/04 12:09:40 by thumavu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

int main()
{
	int fd;
	char *line;

	fd = open("text.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
		printf("%s\n", line);
	close(fd);
	return (0);
}
