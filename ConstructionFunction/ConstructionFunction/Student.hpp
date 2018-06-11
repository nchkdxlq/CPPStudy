//
//  Student.hpp
//  ConstructionFunction
//
//  Created by nchkdxlq on 2017/3/11.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>

class Student {
public:
    Student();
    Student(const Student&);
    ~Student();
private:
    char *pName;
};

#endif /* Student_hpp */
