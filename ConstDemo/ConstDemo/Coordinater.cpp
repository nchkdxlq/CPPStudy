//
//  Coordinater.cpp
//  ObjectMember
//
//  Created by nchkdxlq on 2017/3/24.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>
#include "Coordinater.hpp"

using namespace std;

Coordinate::Coordinate() {
    
}

Coordinate::Coordinate(int x, int y)
: m_iX(x), m_iY(y) {
    
}

Coordinate::~Coordinate() {

}

int Coordinate::getX() {
    return m_iX;
}

void Coordinate::setX(int x) {
    m_iX = x;
}

int Coordinate::getY() {
    return m_iY;
}

void Coordinate::setY(int y) {
    m_iY = y;
}
