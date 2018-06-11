//
//  Line.hpp
//  ObjectMember
//
//  Created by nchkdxlq on 2017/3/24.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#ifndef Line_hpp
#define Line_hpp

#include "Coordinater.hpp"

class Line {
public:
    
    Line();
    Line(int x1, int y1, int x2, int y2);
    ~Line();
    
    Coordinate getCoorA() const;
    void setB(int x, int y);
    void printInfo();
    void printInfo() const;
    
private:
    const Coordinate m_coorA;
    Coordinate m_coorB;

};

#endif /* Line_hpp */
