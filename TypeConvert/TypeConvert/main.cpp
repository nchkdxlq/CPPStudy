//
//  main.cpp
//  TypeConvert
//
//  Created by nchkdxlq on 2017/2/12.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


/*
 宏 

 常量                         const enum
 带参数的宏（类似于函数调用）     inline

 C++高级编程推荐使用const、enum、inline 替换宏

 低层次编程，宏还是很灵活的、
 
 */


/*
 
 隐士转换：  编译器可以自动完成的 （一般来说都是安全的） 精度低转换为精度高的类型
 
 显示转换：  也称为强制类型转换
 
 */

void __const_cast();
void __static_cast();

int main(int argc, const char * argv[]) {

    __const_cast();
    __static_cast();
    
    
    return 0;
}



/*
 const_cast 用来移除常量性
 const_cast 一般用于指针或者引用
 const_cast 去除常量性不是为了修改去内容
 
 */

void __const_cast() {
    
    const int val = 100;
    
    //    int *p = &val; //无法将const int * 转化为 int *
    
    int *p = const_cast<int *>(&val);
    *p = 200;
    
    cout<< "val = "<< val<< endl;
    cout<< "*p = "<< *p<< endl;
    
    cout<< "&val = "<< &val<< endl;
    cout<< "p = "<< p<< endl;
    
    const int val2 = 200;
    //    int &refVal = val2; //Error
    int &refVal = const_cast<int &>(val2);
    refVal = 300;
    cout<< "val2 = "<< val2<< endl;
    cout<< "refVal = "<< refVal<< endl;
    
}


/*
 
 1、编译器隐士执行的任何类型转换都可以由static_cast完成
 2、当有个较大的算术类型赋值给一个较小类型时，可以用 static_cast 进行强制类型转换
 3、可以将 void * 指针转化为某一类型的指针
 4、可以将基类的指针执行派生类指针
 5、无法将const转换为nonconst, 这个只有const_cast才能做到
 */
void __static_cast() {
    
    // 1
    double d = static_cast<double>(3);
    cout<< "d = " <<d << endl;
    
    // 2
    int n = static_cast<int>(3.14);
    cout<< "n = "<< n<< endl;
    
    // 3
    void *p_void = &n;
    int *p_int = static_cast<int *>(p_void);
    cout<< "p_int = "<< *p_int<< endl;
    
}

/*
 
 reinterpret_cast 通常为操作数的位模式提供较低成的重新解释，
 也就是将数据以二进制存在的形式的重新解释。
 
 */
void __reinterpret_cast() {
    
    char *p = "This is a example.";
    long i = reinterpret_cast<long>(p);
    cout<< "p = "<< p<<endl;
    cout<< "i = "<< i<<endl;
    // 此时结果，i 与 p 的值是完全相同的
    
}


