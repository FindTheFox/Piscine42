ldapsearch -Q -LLL  uid=Z* cn | grep "cn" | cut -c 5- | sort -rf
