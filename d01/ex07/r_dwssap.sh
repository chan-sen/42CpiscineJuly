# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    r_dwssap.sh                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chansen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/13 23:19:03 by chansen           #+#    #+#              #
#    Updated: 2016/07/13 23:19:41 by chansen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

cat /ect/passwd | grep -v '#' | awk 'NR%2==0' | cut -d ":" -f 1 | rev | sort -r -d | sed -n "${FT_LINE1},${FT_LINE}p" | tr '\n' ',' | sed "s/,/, /g" | sed "s/, $/./g" | tr -d '\n'