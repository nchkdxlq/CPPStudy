//
//  Teacher.hpp
//  ConstructionFunction
//
//  Created by nchkdxlq on 2017/3/9.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#ifndef Teacher_hpp
#define Teacher_hpp

#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

/*
 
 一、构造函数
 a. 无参构造函数 ------> 默认构造函数
 b. 有参构造函数
 
 
 *** 拷贝构造函数 ***
 1. 如果没有自定义拷贝构造函数则系统自动生成一个默认的构造函数
 2. 当采用直接赋值初始化或者复制初始化实例化对象时，系统自动调用拷贝构造函数
 
 */



class Teacher {
private:
    
    string m_strName;
    int m_iAge;
    const int m_iMax;
    
public:
    Teacher(string name);
    Teacher(string name = "luoquan", int age = 26, int max = 100);
    Teacher(const Teacher&);
    void setAge(int age);
    int getAge();
    
    void setName(string name);
    string getName();
    int getMax();
};


#endif /* Teacher_hpp */
