/**
 * @file Utils.h
 * @brief 定义了一些实用工具函数和宏
 */

#ifndef UTILS_H
#define UTILS_H

/**
 * @brief 计算两个数的和
 * @param a 第一个数
 * @param b 第二个数
 * @return 两个数的和
 */
int add(int a, int b);

/**
 * @brief 计算两个数的积
 * @param a 第一个数
 * @param b 第二个数
 * @return 两个数的积
 */
int multiply(int a, int b);

/**
 * @brief 打印日志信息
 * @param message 要打印的日志信息
 */
void logMessage(const char* message);

/**
 * @brief 定义一个宏，用于快速创建对象
 * @param T 类型
 * @param ... 构造函数参数
 * @return 创建的对象指针
 */
#define CREATE_OBJECT(T, ...) new T(__VA_ARGS__)

/**
 * @brief 定义一个枚举类型，表示不同的日志级别
 */
enum LogLevel {
    INFO,
    WARNING,
    ERROR
};

#endif // UTILS_H