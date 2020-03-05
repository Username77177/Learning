#!/usr/bin/env bash
if [[ $1 = "--help" ]]; then
    echo ""
    echo "Введите название файла без '.cpp'"
    echo "Скрипт сам построит исполняемый файл из исходного кода, переданного как аргумент и поместит его в папку build_folder (создайте её заранее)"
    echo "Синтакс: ./g_build.sh файл"
else
    g++ -o "build_folder/$1" $1 
    ./build_folder/$1
fi
