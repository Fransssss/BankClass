cmake_minimum_required(VERSION 3.21)
project(BankClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(BankClass main.cpp BankItems.cpp BankItems.h)
