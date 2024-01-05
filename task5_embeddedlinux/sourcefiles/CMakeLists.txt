# CMakeLists.txt

cmake_minimum_required(VERSION 3.12)

project(MyProject)

# Add an executable target
add_executable(my_executable main.c multiplication.c division.c addition.c subtraction.c)

# Include directories for the target
target_include_directories(my_executable PRIVATE /home/ubuntu/test/header

   # ${EXTERNAL_LIBRARY_INCLUDES}  # Path to external library includes
)
