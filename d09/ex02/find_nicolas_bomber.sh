# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_nicolas_bomber.sh                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chansen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/21 20:15:29 by chansen           #+#    #+#              #
#    Updated: 2016/07/21 20:19:22 by chansen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat $1 | grep -i "bomber" | grep -v "Sally" | awk '{print $(NF - 1) " " $(NF - 2)}' | tr -d 'BomberNicolas'
