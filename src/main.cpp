/**
 * @file main.cpp
 * @brief 主函数
 */

#include "DerivedClass.h"
#include "Utils.h"
#include <iostream>

int main() {
    // 使用CREATE_OBJECT宏创建DerivedClass对象
    DerivedClass* obj = CREATE_OBJECT(DerivedClass);

    // 调用对象的方法
    obj->printInfo();
    std::cout << "Base class name: " << obj->getName() << std::endl;
    std::cout << "Derived class name: " << obj->getDerivedName() << std::endl;

    // 使用实用工具函数
    std::cout << "3 + 5 = " << add(3, 5) << std::endl;
    std::cout << "3 * 5 = " << multiply(3, 5) << std::endl;

    // 打印日志信息
    logMessage("This is an info message.");

    // 释放对象
    delete obj;

    return 0;
}