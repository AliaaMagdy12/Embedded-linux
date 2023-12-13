#!/bin/bash
mkdir script_exercise
cd script_exercise
touch file1.txt file2.txt file3.txt file4.txt file5.txt 
x=$(date +%Y-%m-%d-%H:%M:%S)
for file in *.txt; do echo mv "$file" "${file%.txt}"_$x.txt; done

