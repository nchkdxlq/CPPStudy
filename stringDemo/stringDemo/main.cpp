//
//  main.cpp
//  stringDemo
//
//  Created by nchkdxlq on 2017/4/21.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#include <iostream>
#include <string>


/*
 标准库类型 string 表示可变长的字符串序列, 使用 string 类型必须首先包含 string 头文件。
 
 */

using std::string;
using std::cout;
using std::cin;
using std::endl;

void string_init();
void string_length();
void convert_to_cString();
void input_string();
void access_char_in_string();
void string_adding();
void cctype();
void range_for();


int main(int argc, const char * argv[]) {

    string_init();
//    string_length();
//    convert_to_cString();
//    input_string();
//    access_char_in_string();
//    string_adding();
//
//    range_for();
    
    return 0;
}


void string_init()
{
    //变量 s1 只是定义但没有初始化，编译器会将默认值赋给 s1，默认值是""，也即空字符串。
    string s1;
    
    //变量 s2 在定义的同时被初始化为"c plus plus"。与C风格的字符串不同，string 的结尾没有结束标志'\0'。
    string s2 = "c plus plus";
    
    // 变量 s3 在定义的时候直接用 s2 进行初始化，因此 s3 的内容也是"c plus plus"。
    string s3 = s2;
    
    //变量 s4 被初始化为由 5 个's'字符组成的字符串，也就是"sssss"。
    string s4(5, 's');
    
    cout << s1 << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    
    s3.length();
}

void string_length()
{
    string s1 = "www.baidu.com";
    auto len = s1.length();
    auto size = s1.size();
    cout << "length = " << len << endl;
    cout << "size = =" << size << endl;
}

void convert_to_cString()
{
    string s1 = "www.baidu.com";
    const char *c_str = s1.c_str();
    cout << c_str << endl;
}


void input_string()
{
    /*
     string 类重载了输入输出运算符，可以像对待普通变量那样对待 string 变量，
     也就是用>>进行输入，用<<进行输出
     
     输入： cookie.luo luoquan
     虽然我们输入了两个由空格隔开的网址，但是只输出了一个，这是因为输入运算符>>默认会忽略空格，
     遇到空格就认为输入结束，所以最后输入的是cookie.luo。
     */
    
    string s1;
    cin >> s1;
    cout << s1 << endl;
}


void access_char_in_string()
{
    /*
     通过下标,可以访问string字符串中的每一个字符，也可以修改字符串中的每一个字符
     
     */
    string s = "abcdefghij";
    
    for (unsigned long i = 0, length = s.length(); i < length; i++) {
        cout << s[i] << "  ";
    }
    cout << endl;
    
    s[0] = 'A';
    s[1] = 'B';
    
    cout << s[0] << endl;
    cout << s[1] << endl;
    
    for (auto ch : s)
        cout << ch << "  ";
    cout << endl;
}


/*
 
 合法操作：string + string, 字面值 + string
 非法操作： 字面值 + 字面值
 备注： 字面值 和 string 是不同数据类型
 */
void string_adding()
{
    // 1. string + string
    string s1 = "hello, ";
    string s2 = "world";
    string s3 = s1 + s2;
    cout << s3 << endl;
    
    // 字面值 + string
    string s4 = "cookie";
    string s5 = "hi " + s4;
    cout << s5 << endl;
    
    // 字面值 + 字面值 (错误)
//    string s6 = "luo " + "quan";
    
    
    isalnum(1);
    isalpha(1);
    iscntrl(1);
}

void cctype()
{
    // 当c为字母或者数字时为真
    isalnum('a');
    
    // 当c为字母时为真
    isalpha('A');
    
    // 当c为数字时为真
    isdigit(100);
    
    // 当c为控制符时为真
    iscntrl('\n');
    
    // 当不是空格但可以打印时为真
    isgraph('s');
    
    // 当c为消息字母时为真
    islower('a');
    
    // 当c为大写字母时为真
    isupper('A');
    
    // 当c为可打印字符时为真（即c是空格后者c具有可视形式）
    isprint('x');
    
    // 当c为标点符号时为真
    ispunct(',');
    
    // 当c是空格时为真（即c是空格、横向制表符、纵向制表符、回车符、换行、进纸符中的一种）
    isspace(' ');
    
    // 当c是十六进制数字时为真
    isxdigit(0xff);
    
    // 如果c为小写，输出对应的大字母；否则原样输出
    toupper('a');
    
    // 如果c为大写，输出对应的小字母；否则原样输出
    tolower('A');
}


void range_for()
{
    string s = "abcdefghigk";
    
    for (auto ch : s)
        cout << ch << " ";
    cout << endl;
    
    for (auto &ch : s)
        ch = toupper(ch);
    
    cout << s << endl;
}



