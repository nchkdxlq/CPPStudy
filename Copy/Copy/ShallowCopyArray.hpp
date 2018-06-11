//
//  ShallowCopyArray.hpp
//  Copy
//
//  Created by nchkdxlq on 2017/3/25.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#ifndef ShallowCopyArray_hpp
#define ShallowCopyArray_hpp

#include <stdio.h>

class ShallowCopyArray {
    
public:
    
    ShallowCopyArray();
    ShallowCopyArray(const ShallowCopyArray&);
    ~ShallowCopyArray();
    
    int getCount();
    void setCount(int count);
    
private:
    int m_iCount;
};

#endif /* ShallowCopyArray_hpp */
