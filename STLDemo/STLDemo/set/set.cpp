//
//  set.cpp
//  STLDemo
//
//  Created by nchkdxlq on 2019/6/11.
//  Copyright © 2019 luoquan. All rights reserved.
//

#include "set.hpp"
#include <iostream>
#include <set>
#include <vector>

using namespace std;


int thirdMax(vector<int>& nums) {
    set<int> s;
    
    for (auto i : nums) {
        s.insert(i);
        if (s.size() > 3) {
            s.erase(s.begin());
        }
    }
    
    if (s.size() < 3) {
        return *(s.rbegin());
    } else {
        return *(s.begin());
    }
}


void set_entry() {
    
    std::set<int> s;
    
    /*
     
     默认情况下，set对元素从小到大排序
     
     s.insert(1); // 插入一个元素
     s.erase(1); // 删除一个元素
     
     s.empty(); // 判空
     s.size(); // 元素个数
     int ret = s.count(1); // 是否存在某个元素，ret 的值为 1 或者 0， 1表示存在
     
     s.clear(); // 清空整个set
     
    */
    
    s.insert(3);
    s.insert(2);
    s.insert(1);
    
    for (auto &num : s) {
        cout << num << " ";
    }
    cout << endl;
    
    for (auto i = s.begin(); i != s.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
    
    cout << "size = " << s.size() << endl;
    
    cout << "first  = " << *(s.begin()) << endl;
    cout << "last  = " << *(s.rbegin()) << endl;
    
    int target = 1;
    auto count1 = s.count(target);
    cout << target << ((count1 == 1) ? " is" : " is not") << " in set" << endl;
    // 清除某个元素
    s.erase(1);
    cout << "erase " << target << endl;
    
    count1 = s.count(1);
    cout << target << ((count1 == 1) ? " is" : " is not") << " in set" << endl;
    
    // 清空
    s.clear();
    cout << "size = " << s.size() << endl;
    
    
    vector<int> nums = {1,2,2,5,3,5};
    int ret = thirdMax(nums);
    cout << "ret = " << ret << endl;
}
