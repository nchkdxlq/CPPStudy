//
//  main.cpp
//  InheritDemo
//
//  Created by nchkdxlq on 2017/5/8.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>

#include "Person.hpp"
#include "InheritClass.hpp"


using namespace std;

void excution_0();
void excution_1();

int main(int argc, const char * argv[]) {

    excution_0();
    excution_1();
    
    return 0;
}


void excution_0()
{
    Pupil p;
    
    p.setname("cookie");
    p.setage(25);
    p.setscore(100.0);
    p.setranking(3);
    p.sethobby("coding");
    
    p.display();
}

void excution_1()
{
    Derived der;
    
    // 设置的是Deried类中的identifier
    der.setIdentifier("derived");
    // 设置的是Base类中的identifier
    der.Base::setIdentifier("base");
    // 使用派生类新增的成员函数
    der.display();
    // 使用从基类继承来的成员函数
    der.Base::display();
    
    /*
     派生类成员和基类成员重名时会造成遮蔽，这计划对于成员变量很好理解，对于成员函数要引起注意，
     不管函数的参数如何，主要名字一样就会造成遮蔽。换句话说，基类成员函数和派生类成员函数不会构成重载，
     (因为派生类函数和基类函数在不同的作用域。只能基类同名函数重载，派生类中函数重载；派生类函数不能喝基类函数重载.)
     如果派生类同名,那么就会遮蔽所有的同名函数，不管他们的参数是否一样。
     */
//    der.show(); //compile error
//    der.show(10); // complire error
    
//    der.show(3.1415926); why????
    der.show(true);
}



















