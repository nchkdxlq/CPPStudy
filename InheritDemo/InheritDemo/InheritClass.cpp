//
//  InheritClass.cpp
//  InheritDemo
//
//  Created by nchkdxlq on 2017/5/11.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include "InheritClass.hpp"
#include "iostream"

using namespace std;


void Base::setIdentifier(string identifier)
{
    m_identifier = identifier;
}

string Base::getIdentifier()
{
    return m_identifier;
}

void Base::display()
{
    cout << "Base class, identifier = " << m_identifier << "." << endl;
}

void Base::show()
{
    cout << "Base class, no param." << endl;
}

void Base::show(int num)
{
    cout << "Base class, int type." << endl;
}


//////////////////////////////////////////////


void Derived::setIdentifier(string identifier)
{
    m_identifier = identifier;
}

string Derived::getIdentifier()
{
    return m_identifier;
}

void Derived::display()
{
    cout << "Derived class, identifier = " << m_identifier << "." << endl;
}

void Derived::show(float value)
{
    cout << "Derived class, float type." << endl;
}

void Derived::show(bool value)
{
    cout << "Derived class, bool type." << endl;
}





