/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:25:55 by knabeel           #+#    #+#             */
/*   Updated: 2022/10/11 18:15:37 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(const char *input);

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *string, int find);
char	*get_next_line(int fd);
char	*ft_get_line(char *save);
char	*ft_skip(char *save);
char	*ft_read_and_save(int fd, char *save);
char	*ft_str_init(void);

#endif