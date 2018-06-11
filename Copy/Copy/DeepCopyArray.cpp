//
//  DeepCopyArray.cpp
//  Copy
//
//  Created by nchkdxlq on 2017/3/25.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//


#include <iostream>
#include "DeepCopyArray.hpp"

using std::cout;
using std::endl;

DeepCopyArray::DeepCopyArray(int count) {
    m_iCount = count;
    m_pInt = new int[m_iCount];
    for (int i = 0; i < m_iCount; i++) {
        m_pInt[i] = i;
    }
    cout << "DeepCopyArray" << endl;
}

DeepCopyArray::DeepCopyArray(const DeepCopyArray& arr) {
    m_iCount = arr.m_iCount;
    m_pInt = new int[m_iCount];
    for (int i = 0; i < m_iCount; i++) {
        m_pInt[i] = arr.m_pInt[i];
    }
    cout << "DeepCopyArray &" << endl;
}


DeepCopyArray::~DeepCopyArray() {
    delete [] m_pInt;
    m_pInt = NULL;
    cout << "~ DeepCopyArray" << endl;
}


int DeepCopyArray::getCount() const {
    return m_iCount;
}
