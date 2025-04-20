/**
 * @file Utils.cpp
 * @brief 实现了Utils.h中声明的函数。
 */

#include "Utils.h"
#include <iostream>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

void logMessage(const char* message) {
    std::cout << message << std::endl;
}