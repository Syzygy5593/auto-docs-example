/**
 * @file BaseClass.h
 * @brief 这是一段简介，用于简要介绍该文件的功能。如：定义了一个基础类BaseClass
 */

#ifndef BASECLASS_H
#define BASECLASS_H

/**
 * @class BaseClass
 * @brief 这是一段简介，用于简要介绍该类的功能。如：基础类，提供一些基础功能
 */
class BaseClass {
public:
    /**
     * @brief 构造函数。
     */
    BaseClass();

    /**
     * @brief 析构函数。
     */
    virtual ~BaseClass();

    /**
     * @brief 打印基础类的信息。
     */
    virtual void printInfo() const;

    /**
     * @brief 获取基础类的名称。
     * @return 基础类的名称。
     */
    const char* getName() const;

protected:
    /**
     * @brief 基础类的名称。
     */
    const char* m_name;
};

#endif // BASECLASS_H