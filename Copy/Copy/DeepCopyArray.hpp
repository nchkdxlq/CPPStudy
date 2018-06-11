//
//  DeepCopyArray.hpp
//  Copy
//
//  Created by nchkdxlq on 2017/3/25.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#ifndef DeepCopyArray_hpp
#define DeepCopyArray_hpp

#include <stdio.h>

class DeepCopyArray {

public:
    DeepCopyArray(int count);
    DeepCopyArray(const DeepCopyArray&);
    ~DeepCopyArray();
    
    int getCount() const;
    
private:
    int m_iCount;
    int *m_pInt;
    
};


#endif /* DeepCopyArray_hpp */
