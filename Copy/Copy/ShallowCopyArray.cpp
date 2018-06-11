//
//  ShallowCopyArray.cpp
//  Copy
//
//  Created by nchkdxlq on 2017/3/25.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>
#include "ShallowCopyArray.hpp"

using std::cout;
using std::endl;

ShallowCopyArray::ShallowCopyArray() {
    cout << "ShallowCopyArray()" << endl;
}

ShallowCopyArray::ShallowCopyArray(const ShallowCopyArray& arr) {
    m_iCount = arr.m_iCount;
    cout << "ShallowCopyArray( & )" << endl;
}

ShallowCopyArray::~ShallowCopyArray() {
    cout << "~ShallowCopyArray()" << endl;
}

int ShallowCopyArray::getCount() {
    return m_iCount;
}

void ShallowCopyArray::setCount(int count) {
    m_iCount = count;
}
