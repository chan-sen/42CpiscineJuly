# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    print_groups.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chansen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/13 19:13:38 by chansen           #+#    #+#              #
#    Updated: 2016/07/13 19:17:07 by chansen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

groups $FT_USER | tr ' ' ',' | tr -d '\n'
