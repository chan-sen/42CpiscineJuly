/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 22:29:37 by chansen           #+#    #+#             */
/*   Updated: 2016/07/28 22:29:40 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H

# include <unistd.h>
# include <fcntl.h>

# define BUFF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_filestat(int argc);
#endif
