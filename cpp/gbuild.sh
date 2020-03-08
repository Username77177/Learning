#!/usr/bin/env bash
if [[ $1 = "--help" ]]; then
    echo ""
    echo "Скрипт сам построит исполняемый файл из исходного кода, переданного как аргумент и поместит его в папку build_folder (создайте её заранее)"
    echo "Синтакс: ./g_build.sh файл"
else
    echo "[b]uild and run or [d]ebug or [anything else] - nothing"
    read input
    if [[ $input = "b" ]]; then
        g++ -o "./build_folder/$1" -g "./$1" 
        ./build_folder/$1
    elif [[ $input = "d" ]]; then
        g++ -g "./$1" -o "./build_folder/$1"
        gdb ./build_folder/$1
    fi
fi
