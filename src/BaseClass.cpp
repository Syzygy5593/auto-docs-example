/**
 * @file BaseClass.cpp
 * @brief 这是一段简介，用于简要介绍该文件的功能。如：实现了BaseClass类的成员函数
 */

#include "BaseClass.h"
#include <iostream>

BaseClass::BaseClass() : m_name("BaseClass") {}

BaseClass::~BaseClass() {}

void BaseClass::printInfo() const {
    std::cout << "This is a BaseClass object." << std::endl;
}

const char* BaseClass::getName() const {
    return m_name;
}