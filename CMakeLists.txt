cmake_minimum_required(VERSION 3.0)
project(NombreDelProyecto C)

# Agrega tus fuentes
set(SOURCES
    src/main.c
)

# Crea el ejecutable
add_executable(mi_programa ${SOURCES})

# Incluye directorios de encabezados
target_include_directories(mi_programa PUBLIC includes)
