//
//  main.cpp
//  Copy
//
//  Created by nchkdxlq on 2017/3/25.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>
#include "ShallowCopyArray.hpp"
#include "DeepCopyArray.hpp"


/*
    浅拷贝和深拷贝的区别
 
 浅拷贝：
    只是将实例对象的数据成员简单的赋值。
 
 深拷贝：
    对象的数据成员是非指针时，直接赋值；对象的数据成员是指针时，指向的内存数据也进行拷贝。
 
 当对象的数据成员有指针类型时，如果使用浅拷贝，赋值后指针数据成员指向相同的内存空间。
 在对象释放时，会对内存空间释放多次，造成crash。
 
 */

int main(int argc, const char * argv[]) {
    
    ShallowCopyArray shall1;
    ShallowCopyArray shall2 = shall1;
    
    DeepCopyArray deep1 = DeepCopyArray(5);
    DeepCopyArray deep2 = deep1;
    
    return 0;
}
