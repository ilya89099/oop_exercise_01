#!/bin/bash
prog="$1"

for file in test_??.test
do
    "$prog" < file > tmp
    if diff tmp ${file%%.*}.result
    then
	echo "OK"
    else
	echo "NOT OK"
    fi
    rm tmp
done
    
