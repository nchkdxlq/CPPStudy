//
//  main.cpp
//  ConstructionFunction
//
//  Created by nchkdxlq on 2017/3/9.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "Teacher.hpp"
#include "Student.hpp"


using namespace std;

void __testTeacher_1();
void __testTeacher_2();
void __testStudent();

int main(int argc, const char * argv[]) {

//    __testTeacher_1();
//    __testTeacher_2();
    __testStudent();
    
    return 0;
}

// 构造函数
void __testTeacher_1() {
    Teacher t1;
    cout << t1.getName() << " " << t1.getAge() << endl;
    
    Teacher t2("cookie", 23, 120);
    
    cout << t2.getName() << " " << t2.getAge() << " " << t2.getMax() << endl;
}

// 拷贝构造函数
void __testTeacher_2() {
    Teacher t1;
    Teacher t2 = t1;
    Teacher t3 = Teacher(t1);
}

// 析构函数
void __testStudent() {
    
    Student t1;
    Student *p_t2 = new Student();
    Student t3 = Student(t1);
    
    delete p_t2;
}
