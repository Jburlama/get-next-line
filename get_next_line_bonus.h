/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jburlama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:05:27 by jburlama          #+#    #+#             */
/*   Updated: 2023/11/11 20:20:26 by jburlama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_calloc(int size);
char	*free_all(char **s1, char **s2);
int		ft_strlen(char *str);
int		check_nl(char *str);
char	*ft_strcpy(char **buffer);
char	*get_str(char **str, char **buffer, int *bytes_read, int fd);
char	*strappend(char **str, char **buffer);
char	*fetch_line(char **str);
char	*update_str(char **str);

#endif
