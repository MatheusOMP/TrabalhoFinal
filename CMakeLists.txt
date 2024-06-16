cmake_minimum_required(VERSION 3.29)
project(MyProject)

# Definir as fontes dos diretórios Core e Funcionarios
file(GLOB CORE_SOURCES "Core/source/*.cpp")
file(GLOB FUNCIONARIOS_SOURCES "Funcionarios/source/*.cpp")

# Incluir diretórios de cabeçalhos
include_directories(Core/include Funcionarios/include)

# Criar biblioteca para Core
add_library(Core STATIC ${CORE_SOURCES})

# Adicionar o executável
add_executable(teste main.cpp)

# Ligar as bibliotecas ao executável
target_link_libraries(teste Core)