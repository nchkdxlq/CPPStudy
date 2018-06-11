//
//  InheritClass.hpp
//  InheritDemo
//
//  Created by nchkdxlq on 2017/5/11.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#ifndef InheritClass_hpp
#define InheritClass_hpp

#include <stdio.h>
#include <string>

using std::string;



/*
 为了验证类继承时`派生类成员名字`与`基类成员名字`相同时名字遮蔽特性
 
 如果派生类中的成员(包括成员变量和成员函数)和基类中的成员重名时, 那么派生类就会遮蔽从基类继承过来的成员。
 所谓的遮蔽, 就是在派生类中使用该成员(包括定义派生类时使用, 通过派生类对象访问该成员)时,
 实际上使用的是派生类新增的成员, 而不是从基类继承来的。
 
 */



class Base {

public:
    void setIdentifier(string identifier);
    string getIdentifier();
    void display();
    
    void show();
    void show(int num);
    
protected:
    string m_identifier;
    
private:
    
};

//////////////////////////////////////////////

class Derived: public Base {
    
public:
    void setIdentifier(string identifier);
    string getIdentifier();
    void display();
    void show(float value);
    void show(bool value);
    
protected:
    string m_identifier;
};



#endif /* InheritClass_hpp */
