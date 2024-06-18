# Trabalho Final de PDS2

## Comandos para CMake sem wsl

> `build> cmake ..`  
> `build> cmake --build .`  
> se o vs code não setar automaticamente o compilador, é necessário rodar o primeiro comando da seguinte forma:  
> `build> cmake .. -D CMAKE_CXX_COMPILER=g++.exe -G MinGW` (se não usar mingw, trocar pelo gerador de arquivos correto)
