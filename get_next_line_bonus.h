/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdalla <eabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 23:25:59 by eabdalla          #+#    #+#             */
/*   Updated: 2023/04/07 23:26:04 by eabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <stddef.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <limits.h>

size_t	ft_strlen(const char *s);
char	*strjoinandfree(char *s1, char *s2);
char	*ft_strchr(const char *str, int c);
void	*ft_memset(void *dest, int c, size_t len);
char	*ft_read(int fd, char *str);
char	*get_next_line(int fd);
void	*ft_calloc(size_t count, size_t size);
void	*ft_free(char **str);

#endif