//
//  main.cpp
//  iteratorDemo
//
//  Created by nchkdxlq on 2017/4/23.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::iterator;

/*
 1. iterator是什么？
 2. iterator能做什么？
 3. iterator有什么特点
 
 
 
 
 
 
 */

int main(int argc, const char * argv[]) {
    
    string s1 = "luoquan";
    
    for (auto it = s1.begin(); it != s1.end(); it += 2) {
        *it = toupper(*it);
    }
    
    cout << s1 << endl;
    
    return 0;
}




