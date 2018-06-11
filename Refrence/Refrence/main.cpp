//
//  main.cpp
//  Refrence
//
//  Created by nchkdxlq on 2017/2/11.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>

using namespace std;

void refrence();
void constRefrence();
void refrence_param();

int main(int argc, const char * argv[]) {
    
    refrence();
    constRefrence();
    refrence_param();
    
    return 0;
}


void refrence() {
    int value = 100;
    int &refVal = value;
    
    refVal = 200; // 将200赋值给refVal, 实际上改变的是value这个变量
    
    cout<< "value = "<< value<< endl;
    
    int value2 = 500;
    refVal = value2; // 不代表将refVal引用至value2变量，仅仅只代表将value2赋值给refVal
    
    cout<< "value = "<< value<< endl;
}

/*
 const引用是指向const对象的引用
 
 */
void constRefrence() {
    const int value = 1024;
    const int &refVal = value;
    
    cout<< "refVal = " << refVal<< endl;
//    int &refVal2 = value; //Error: nonconst refrence to const object
//    refVal = 200; // Error: refVal 是一个常量
    
    double val3 = 3.14;
    /*
      等价于： int temp = val3; const int &ref3 = temp;
     会产生一个临时变量，引用实际上是引用的是临时变量。
     */
    const int &ref3 = val3;
    
    cout<< "val3 = "<< val3<< endl;
    cout<< "ref3 = "<< ref3<< endl;
    
}

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

/*
 引用作为函数参数传递
 */
void refrence_param() {
    
    int a = 10;
    int b = 20;

    cout<< "before swap: "<< "a = " << a<< ", b = "<< b<< endl;
    
    swap(a, b); // 形参引用在函数调用时初始化， x = a, y = b;
    
    cout<< "after swap: "<< "a = " << a<< ", b = "<< b<< endl;
    
}

/*
 引用作为函数的返回值
 函数返回引用的一个目的就是可以将函数放在赋值运算符的左边
 注意：不能返回对局部变量的引用。
 */

int a[] = {0, 1, 2, 3, 4};

int & index(int i) {
    return a[i];
}

void refrence_returnValue() {
    
    /*
     引用作为函数的返回值，使得函数可以放在赋值运算符左边，
     函数返回引用，引用在函数返回的时候初始化，
     index(3)在函数返回值的时候被初始化为a[3]
     */
    index(3) = 100;
    
    cout<< "a[3] = "<< a[3]<< endl;
}



