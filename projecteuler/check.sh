#!/bin/bash

read input
echo $input
answer=$(echo -n $input | md5sum | cut -d' ' -f1)

if grep -q $answer "./problem_list.txt"
then
    echo "Correct"
else
    echo "Wrong"
fi
