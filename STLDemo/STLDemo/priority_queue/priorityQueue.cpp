//
//  priorityQueue.cpp
//  STLDemo
//
//  Created by nchkdxlq on 2019/6/11.
//  Copyright © 2019 luoquan. All rights reserved.
//

#include "priorityQueue.hpp"
#include<queue>
#include <vector>
#include <iostream>


using namespace std;


template<typename T> void print_queue(T& q) {
    while(!q.empty()) {
        std::cout << q.top() << " ";
        q.pop();
    }
    std::cout << '\n';
}

void priority_queue_entry() {
    
    vector<int> iv = {1, 8, 5, 6, 3, 4, 0, 9, 7, 2};
    
    // 默认是 大顶堆
    priority_queue<int> q1;
    for (auto i : iv) {
        q1.push(i);
    }
    cout << "size = " << q1.size() << endl;
    print_queue(q1);
    
    
    // 创建 小顶堆
    priority_queue<int, vector<int>, greater<>> q2;
    for (auto i : iv) {
        q2.push(i);
    }
    print_queue(q2);
}






