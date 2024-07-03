cmake_minimum_required(VERSION 3.29)
project(MyProject)

# Definir as fontes dos diretórios Core e Funcionarios
file(GLOB CORE_SOURCES "Core/source/*.cpp")
file(GLOB FUNCIONARIOS_SOURCES "Funcionarios/source/*.cpp")
file(GLOB SETORES_SOURCES "Setores/source/*.cpp")

set(SOURCES
    ${CORE_SOURCES}
    ${FUNCIONARIOS_SOURCES}
    ${SETORES_SOURCES}
    main.cpp
)

#set(TEST_SRC
#    ${CORE_SOURCES}
#    ${FUNCIONARIOS_SOURCES}
#    ${SETORES_SOURCES}
#    testes/Teste.cpp
#)

# Incluir diretórios de cabeçalhos
include_directories(
    Core/include
    Funcionarios/include
    Setores/include
    # testes/include
)

# find_package(Catch2 REQUIRED)

# Adicionar o executável
add_executable(main ${SOURCES})
# add_executable(teste ${TEST_SRC})

# target_link_libraries(teste PRIVATE Catch2::Catch2)