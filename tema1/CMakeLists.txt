# Versiunea minimă de CMake necesară
cmake_minimum_required(VERSION 3.0)

# Numele proiectului
set(myproject "tema1")
project(${myproject})

# Specificarea standardului C++
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Definirea executabilului
add_executable(${PROJECT_NAME} src/main.cpp src/Player.cpp src/Team.cpp src/Goalkeeper.cpp)

# Includerea directoarelor
include_directories(src)
