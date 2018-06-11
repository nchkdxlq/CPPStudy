//
//  Teacher.cpp
//  ConstructionFunction
//
//  Created by nchkdxlq on 2017/3/9.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include "Teacher.hpp"

Teacher::Teacher(string name): m_iMax(100) {
    m_strName = name;
    m_iAge = 5;
}


/*
 初始化列表初始化数据
 */

Teacher::Teacher(string name, int age, int max):
m_strName(name), m_iAge(age), m_iMax(max)
{
    cout << "Teacher::Teacher(string name, int age, int max)" << endl;
    m_iAge = age;
    m_strName = name;
}

Teacher::Teacher(const Teacher &item): m_iMax(item.m_iMax) {
    cout << "Teacher::Teacher(const Teacher &item)" << endl;
    m_strName = item.m_strName;
    m_iAge = item.m_iAge;
}

void Teacher::setAge(int age) {
    m_iAge = age;
}

int Teacher::getAge() {
    return m_iAge;
}

void Teacher::setName(string name) {
    m_strName = name;
}

string Teacher::getName() {
    return m_strName;
}

int Teacher::getMax() {
    return m_iMax;
}




