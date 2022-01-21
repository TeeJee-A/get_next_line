/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataji <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:03:38 by ataji             #+#    #+#             */
/*   Updated: 2022/01/20 01:05:26 by ataji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H

# include<stdio.h>
# include<unistd.h>
# include<fcntl.h>
# include<stdlib.h>
# include<sys/syslimits.h>

char	*get_next_line(int fd);
int		ft_strlen(char *str);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		get_back_slash_n(char *store_data);
char	*ft_strjoin(char *s1, char *s2);
char	*get_line_file(char **store_data, int fd);
char	*rest_line(char *s);
char	*get_line_static(char *store_data);

#endif
