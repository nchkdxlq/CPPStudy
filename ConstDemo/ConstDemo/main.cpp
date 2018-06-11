//
//  main.cpp
//  ConstDemo
//
//  Created by nchkdxlq on 2017/3/26.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>
#include "Line.hpp"

/*
    常成员函数
 
 声明：<类型标志符>函数名（参数表）const;
 说明：
  1) const是函数的一部分，在函数实现的部分也要带上const关键字
  2) const关键字可以用于对重载函数的区分, 
     在Line类中， printInfo() 和 printInfo() const 互为重载函数
  3) 常成员函数不能更新对象的成员变量，不能调用普通成员函数(没有被const的修饰的成员函数),只能调用常成员函数;
     普通成员函数能调用常成员函数
  4) 常量对象不能调用非常成员函数
 
  总结： 非const可以调用const, const不能调用非const.
 
 */


int main(int argc, const char * argv[]) {
    
    Line line1(1, 2, 3, 4);
    line1.printInfo();
    line1.getCoorA();
    line1.setB(20, 30);
    
    const Line line2(5, 6, 7, 8);
    line2.printInfo();
    //line2.setB(20, 30); 常量对象不能调用非常成员函数
    
    return 0;
}
