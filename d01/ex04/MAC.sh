# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chansen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/13 19:47:41 by chansen           #+#    #+#              #
#    Updated: 2016/07/13 19:47:44 by chansen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | grep "ether " | cut -c 8-
