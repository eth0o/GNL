/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdalla <eabdalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 22:19:41 by eabdalla          #+#    #+#             */
/*   Updated: 2023/04/07 22:27:04 by eabdalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 40
# endif

# include <stddef.h> //size_t
# include <stdio.h> //printf
# include <unistd.h> //read, write
# include <stdlib.h> //malloc, free
# include <fcntl.h> //file control options
# include <string.h> //strchr
# include <limits.h> //for OPEN_MAX

size_t	ft_strlen(const char *s);
char	*strjoinandfree(char *s1, char *s2);
char	*ft_strchr(const char *str, int c);
void	*ft_memset(void *dest, int c, size_t len);
char	*ft_read(int fd, char *str);
char	*get_next_line(int fd);
void	*ft_calloc(size_t count, size_t size);
void	*ft_free(char **str);

#endif