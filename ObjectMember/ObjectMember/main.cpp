//
//  main.cpp
//  ObjectMember
//
//  Created by nchkdxlq on 2017/3/24.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

#include "Coordinater.hpp"
#include "Line.hpp"


/*
    *** 对象成员 ***
 
 当类对象作为类的数据成员
 
 > 构造函数的调用顺序为：先调用类对象数据成员的构造函数，再调用类本身的构造函数。
 
 > 析构过程为：先调用对象本身的析构函数，再调用对象成员的析构函数。
 
 */


int main(int argc, const char * argv[]) {

    Line *line = new Line();

    delete line;
    line = NULL;
    
    Line *p = new Line(1, 2, 3, 4);
    delete p;
    p = NULL;
    
    return 0;
}


