/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knabeel <knabeel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:40:29 by knabeel           #+#    #+#             */
/*   Updated: 2022/10/11 18:16:09 by knabeel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(const char *input);
char	*ft_strchr(const char *string, int find);
char	*get_next_line(int fd);
char	*ft_get_line(char *save);
char	*ft_skip(char *save);
char	*ft_read_and_save(int fd, char *save);
char	*ft_str_init(void);

#endif