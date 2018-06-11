//
//  Student.cpp
//  ConstructionFunction
//
//  Created by nchkdxlq on 2017/3/11.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include "Student.hpp"
#include <iostream>

Student::Student() {
    std::cout << "Student()" << std::endl;
}

Student::Student(const Student& item) {
    std::cout << "Student(const Student&)" << std::endl;
}

Student::~Student() {
    std::cout << "~Student" << std::endl;
}
