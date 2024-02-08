/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburlama <marvin@41.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:21:28 by jburlama          #+#    #+#             */
/*   Updated: 2023/11/10 18:19:59 by jburlama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*get_str(char **str, char **buffer, int fd, int *bytes_read);
char	*update_str(char **str);
char	*check_nl(char **str);
char	*strappend(char **str, char **buffer);
char	*ft_strcpy(char **buffer);
char	*fetch_line(char **str);
char	*ft_calloc(int size);
char	*free_all(char **s1, char **s2);
int		ft_strlen(char *str);

#endif
