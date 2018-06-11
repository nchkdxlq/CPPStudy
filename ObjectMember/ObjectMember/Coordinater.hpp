//
//  Coordinater.hpp
//  ObjectMember
//
//  Created by nchkdxlq on 2017/3/24.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#ifndef Coordinater_hpp
#define Coordinater_hpp

#include <stdio.h>


class Coordinate {
    
public:
    Coordinate();
    Coordinate(int x, int y);
    ~Coordinate();
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);

private:
    int m_iX;
    int m_iY;
    
};


#endif /* Coordinater_hpp */
