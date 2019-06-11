//
//  main.cpp
//  VectorDemo
//
//  Created by nchkdxlq on 2017/4/22.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::cin;
using std::endl;


/************************************************************
 
 标准库类型 vector 表示对象的集合，其中所有对象的类型都相同。集合中的每个对象都有一个与之对应的索引，索引用于访问对象。
 因为vector '容纳着' 其他的对象，所有它也常称为容器（container）.
 
 
 ****** 定义和初始化 vector 对象 ******
 
 vector<T> v1;                    // v1是一个空的vector,它潜在的元素是T类型,执行默认初始化
 vector<T> v2(v1);                // v2中包含有v1所有元素的副本
 vector<T> v2 = v1;               // 等价于v2(v1), v2中包含有v1所有元素的副本
 vector<T> v3(n, val);            // v3包含n个重复的元素，每个元素的值都是val
 vector<T> v4(n);                 // v4包含了n个重复执行了值初始化的对象
 vector<T> v5{a, b, c, ...};      // v5包含了初始值的个数，每个元素被赋予对相应的初始值
 vector<T> v5 = {a, b, c, ...};   // 等价于v5{a, b, c, ...}; v5
 
 */

void push_back_elem_to_vector();
void subscript();
vector<int> getRow(int rowIndex);
void init_vector();

int main(int argc, const char * argv[]) {

    push_back_elem_to_vector();
    subscript();
    init_vector();
    vector<int> ret = getRow(3);
    
    return 0;
}


vector<int> getRow(int rowIndex) {
    if (rowIndex <= 1) {
        vector<int> ret(rowIndex+1, 1);
        return ret;
    }
    vector<int> preRow(rowIndex+1), curRow(rowIndex+1);
    preRow.clear();
    curRow.clear();
    curRow.push_back(1);
    curRow.push_back(1);
    for (int row = 2; row <= rowIndex; row++) {
        vector<int> tmp = preRow;
        preRow = curRow;
        curRow = tmp;
        curRow.clear();
        for (int col = 0; col <= row; col++) {
            if (col == 0 || col == row) {
                curRow.push_back(1);
            } else {
                curRow.push_back(preRow[col-1]+preRow[col]);
            }
        }
    }
    
    return curRow;
}


void init_vector()
{
    //默认初始化对象
    vector<string> svec; //默认初始化，svec中不含有任何元素
    
    // 列表初始化 vector 对象
    vector<string> articles = {"a", "an", "the"};
    vector<string> articles1{"a", "an", "the"};
    //vector<string> articles1("a", "an", "the"); 错误
    
    // 创建 指定初始值 指定数量 的元素
    vector<int> ivec(10, -1); // 10个int类型的元素，每个元素都被初始化为-1.
    vector<string> str_vec(10, "Hi"); // 10个string类型的元素，每个元素都被初始化为 "Hi".
    
    vector<int> v7{10};
    vector<string> v8(10);
    
}

/************************************************************
 
 疑问: 列表初始化值还是元素数量
 
 在一般情况下，初始化的真实含义依赖于传递初始值时用的是花括号{}还是圆括号().
 例如用一个整数来初始化vector<int>时，整数的含义可能是vector对象的容量也可能是元素的值。
 类似的，用两个整数初始化vector<int>时，这两个整数可能一个是vector的对象的容量，另一个是元素的初始值；
 也可能它们是容量为2的vector对象中两个元素的初始值。
 通过使用花括号还是圆括号可以区分上述这些含义：
 
 vector<int> v1(10); // v1有10个元素，每个元素的值都是0
 vector<int> v2{10}; // v2有一个元素，该元素的值为10
 vector<int> v3(10, 1); // v3有10个元素，每个元素的值都是1
 vector<int> v4{10, 1}; // v4有两个元素，值分别为10、1
 
 *）如果用的是花括号 ()，可以说是提供的值是用来构造vector对象的。
    例如，v1的初始值说明了vector对象的容量；v3的两个初始值分别说明了vector对象的容量和元素的初值。
 
 *）如果用的是花括号{}, 可表述成我们想列表初始化该vector对象。
    初始化过程尽可能的把花括号内的值当成元素的初始值的列表来处理，只有在无法执行列表初始化时才会考虑其他的初始化方式。
    在上例中，给v2和v4提供的初始值都能作为元素的值，所以他们都会执行列表初始化。
 
 特殊情况：
 如果初始化时使用了花括号的形式，但是提供的值又不能用列表初始化，就要考虑用这样的值来构造vector对象了。
 vector<string> v5{"Hi"}; // 列表出事话：v5有一个元素
 vector<string> v6("Hi"); // 错误，不能用字符串字面值构造vector对象
 vector<string> v7{10};   // 不能列表初始化，所以10用来构造vector对象，v7有10个默认初始化的元素
 vector<string> v8{10, "Hi"}; // v8有10个元素，每个元素的值为 "Hi".
 
 尽管在上面的例子中除了v6都用了花括号，但其实只有v5是列表初始化。
 要想列表初始化vector对象，花括号里的值必须以元素类型相同。显然不能用int初始化string对象，
 所以v7和v8提供的值不能作为元素的初始值。确认无法执行列表初始化后，编译器就会尝试默认初始化vector对象。
 
 */



/************************************************************
 
 push back element to vector
 
 */
void push_back_elem_to_vector()
{
    vector<int> iv; // 空vector对象
    
    for (int i = 0 ; i != 10; i++) {
        iv.push_back(i); // 依次把整数的值放到vector的尾端
    }
    
    iv.insert(iv.begin(), 100);
    
    for (int num : iv) {
        cout << num << " ";
    }
    cout << endl;

    for (int i = 0; iv.empty() == false; i++) {
        iv.pop_back();
    }
    
    for (int num : iv) {
        cout << num << " ";
    }
    cout << endl;
    
    return;
}


/************************************************************
 
 下标访问 (下标运算符)
 vector对象中的每一个元素都有一个对应的下标, 下标从0开始，下标的类型为size_type。
 可以通过下标运算符访问vector中的元素。
 如果vector对象不是const，还可以通过下标修改下标对应位置的元素的值。
 
 注意：
 不能用下标的形式添加元素，只能通过下标运算符访问vector存在的元素。
 vector<int> ivec;
 ivec[0] = 1; // 错误
 
 */

void subscript()
{
    vector<string> str_v = {"Aa", "Bb", "Cc", "Dd", "Ee", "Ff", "Gg"};
    
    for (decltype(str_v.size()) i = 0, size = str_v.size() ; i != size; i++) {
        cout<< str_v[i] << "  ";
    }
    cout << endl;
    
    for (decltype(str_v.size()) i = 0, size = str_v.size() ; i != size; i++) {
        auto str = str_v[i];
        // range for 遍历 string 对象
        for (auto &ch : str) {
            ch = toupper(ch);
        }
        // 通过下标修改对应位置的元素
        str_v[i] = str;
    }
    cout << endl;
    
    for (decltype(str_v.size()) i = 0, size = str_v.size() ; i != size; i++) {
        cout<< str_v[i] << "  ";
    }
    cout << endl;
    
    return;
}




