/**
 * @file DerivedClass.h
 * @brief 定义了一个派生类DerivedClass
 */

#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include "BaseClass.h"

/**
 * @class DerivedClass
 * @brief 派生类，继承自BaseClass并扩展了一些功能
 */
class DerivedClass : public BaseClass {
public:
    /**
     * @brief 构造函数
     */
    DerivedClass();

    /**
     * @brief 析构函数
     */
    virtual ~DerivedClass();

    /**
     * @brief 打印派生类的信息
     */
    virtual void printInfo() const override;

    /**
     * @brief 获取派生类的名称
     * @return 派生类的名称
     */
    const char* getDerivedName() const;

private:
    /**
     * @brief 派生类的名称
     */
    const char* m_derivedName;
};

#endif // DERIVEDCLASS_H