#!/bin/bash

for ((i=1; i<=31; i++))
do
    # 変数iを0埋めして、hoge.txtの□を置換し、結果を新しいファイルに保存
    padded_i=$(printf "%02d" "$i")
    sed "s/#D/$i/g" spl.txt > spl1.txt

    # echo $(($i+1))

    curl -u admin:changeme -k https://localhost:8089/services/search/jobs/export --data-urlencode search@spl1.txt --get -d output_mode=csv -d count=0 -d preview=false > "output_$padded_i.txt"

done
