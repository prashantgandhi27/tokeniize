################################################################################
#  \author     Prashant Gandhi
#  \date       05/17/2024
################################################################################

cmake_minimum_required(VERSION 3.20)

project(tokenize_lib
   DESCRIPTION "Tokenize the string based on the delimiter."
   LANGUAGES C
)

set(CMAKE_C_STANDARD 11)

set(HEADERS
   ${CMAKE_CURRENT_SOURCE_DIR}/include/tokenize/tokenize.h
   ${CMAKE_CURRENT_SOURCE_DIR}/include/tokenize_public.h
)

set(SOURCES
   ${CMAKE_CURRENT_SOURCE_DIR}/src/tokenize.c
)

add_library(${PROJECT_NAME}
   ${HEADERS}
   ${SOURCES}
)

target_include_directories(${PROJECT_NAME}
   PUBLIC
      ${CMAKE_CURRENT_SOURCE_DIR}/include
   PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/src
)
