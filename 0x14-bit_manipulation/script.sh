#!/bin/bash
for passwrd in $(strings ./crackme3)
do
    cp ./crackme3 temp.out
    bilal=$(./temp.out $passwrd | grep -v "Access denied :(")
    echo "Trying: $passwrd"
    if [ "$bilal" != '' ]
    then
	printf "\nThe password is: %s\n" "$passwrd"
	exit 0
    fi
done
