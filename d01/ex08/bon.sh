ldapsearch -LLLx | grep "cn:" | grep -i "bon" | wc -l | sed 's/ //g'