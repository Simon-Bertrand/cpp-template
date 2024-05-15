cmake_minimum_required(VERSION 3.27)
project(MyProgram)

# Ajoutez ici les fichiers source de votre projet
file(GLOB_RECURSE SOURCES
    src/*.cpp
)

# Ajoutez ici les fichiers d'en-tête de votre projet
file(GLOB_RECURSE HEADERS
    include/*.hpp
)
include_directories(MyProgram PRIVATE include)
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

# target_link_libraries(${PROJECT_NAME} mylib)