cmake_minimum_required(VERSION 3.28)
project(DoubleLinkedLists)

set(CMAKE_CXX_STANDARD 17)

add_executable(DoubleLinkedLists main.cpp
        Node.h
        LinkedDouble.cpp
        LinkedDouble.h
        Teams.cpp
        Teams.h
        ELigue.h
        TeamManagement.cpp
        TeamManagement.h
)
