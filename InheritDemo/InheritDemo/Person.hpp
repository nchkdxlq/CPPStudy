//
//  Person.hpp
//  InheritDemo
//
//  Created by nchkdxlq on 2017/5/8.
//  Copyright © 2017年 nchkdxlq. All rights reserved.
//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <string>

using std::string;

/////////////////////////////////////////////////////////

class Person {
    
public:
    void setname(string name);
    string getname();
    void setage(int age);
    int getage();
    void sethobby(string hobby);
    string gethobby();
    
    void show();
    
protected:
    string m_name;
    int m_age;
    
    
private:
    string m_hobby;
    
};



/////////////////////////////////////////////////////////


class Student: public Person {

public:
    void setscore(float score);
    void learning();

public:
    using Person::m_name; // 将private改为public
    using Person::m_age; // 将private改为public

protected:
    float m_score;

private:
    using:: Person::show; // 将public改为private;
    
};


/////////////////////////////////////////////////////////

class Pupil: public Student {
    
public:
    void setranking(int ranking);
    void display();
    
private:
    int m_ranking;
    
};


/////////////////////////////////////////////////////////



class Person1 {
    
public:
    void setage(int age);
    int getage();
    void setname(string name);
    string getname();
    
    void sayHello();
    
protected:
    int m_age;
    string m_name;
};


class Student1: public Person1 {
    
public:
    Student1(string name, int age, float score);
    
    void setscore(float score);
    float getscore();
    
    void sayHello();
    
private:
    float m_score;
    
};


#endif /* Person_hpp */
