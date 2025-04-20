/**
 * @file DerivedClass.cpp
 * @brief 实现了DerivedClass类的成员函数
 */

#include "DerivedClass.h"
#include <iostream>

DerivedClass::DerivedClass() : BaseClass(), m_derivedName("DerivedClass") {}

DerivedClass::~DerivedClass() {}

void DerivedClass::printInfo() const {
    std::cout << "This is a DerivedClass object." << std::endl;
}

const char* DerivedClass::getDerivedName() const {
    return m_derivedName;
}