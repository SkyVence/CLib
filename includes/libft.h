/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmathie <anmathie@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 01:20:41 by anmathie          #+#    #+#             */
/*   Updated: 2025/07/28 01:37:08 by anmathie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

void	ft_putstrerr(char *str);
void	ft_putstr(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *str);
int		ft_strlen(char *str);

#endif