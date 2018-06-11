//
//  Person.cpp
//  InheritDemo
//
//  Created by nchkdxlq on 2017/5/8.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include "Person.hpp"
#include <iostream>

using std::cout;
using std::endl;

/////////////////////////////////////////////////////////

void Person::setname(string name)
{
    m_name = name;
}

string Person::getname()
{
    return m_name;
}

void Person::setage(int age)
{
    m_age = age;
}

int Person::getage()
{
    return m_age;
}


void Person::sethobby(string hobby)
{
    m_hobby = hobby;
}


string Person::gethobby()
{
    return m_hobby;
}


/////////////////////////////////////////////////////////

void Student::setscore(float score)
{
    m_score = score;
}


void Student::learning()
{
    cout<< "我是"<< m_name << ", 今年" << m_age<< "岁，这次考了" << m_score << "分！" <<endl;
}


/////////////////////////////////////////////////////////

void Pupil::setranking(int ranking)
{
    m_ranking = ranking;
}

void Pupil::display()
{
    cout<<m_name<<"的年龄是"<<m_age<<"，考试成绩为"<<m_score<<"分，班级排名第"<<m_ranking<<"，TA喜欢"<<gethobby()<<"。"<<endl;
}


/////////////////////////////////////////////////////////

void Person1::setage(int age)
{
    m_age = age;
}

int Person1::getage()
{
    return m_age;
}

void Person1::setname(string name)
{
    m_name = name;
}

string Person1::getname()
{
    return m_name;
}

void Person1::sayHello()
{
    cout << "i am " << m_name << ", " << m_age << " years old." << endl;
}

Student1::Student1(string name, int age, float score)
{
    m_name = name;
    m_age = age;
    m_score = score;
}

void Student1::sayHello()
{
    cout << "i am a student, " << "my name is " << m_name << ", "<<"my score is " << m_score << "." << endl;
}

