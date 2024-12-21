/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment6*/

#ifndef CLASSES_H
#define CLASSES_H

#include <vector>
#include "temp_class.h"

class Class1
{
public:
    bool bar(int n, std::vector<float>& m)
    {
        return n > 0;
    }
    int c_1_1() {return 1;}
    float c_1_2() {return 1.0f;}
    void c_1_3() {}
};

class Class2
{
public:
    bool bar(int n, std::vector<float>& m)
    {
        return !m.empty();
    }
    int c_2_1() {return 2;}
    float c_2_2() {return 2.0f;}
    void c_2_3() {}
};

class Class3
{
public:
    bool bar(int n, std::vector<float>& m)
    {
        return n == static_cast<int>(m.size()) * (-1);
    }
    int c_3_1() {return 3;}
    float c_3_2() {return 3.0f;}
    void c_3_3() {}
};


#endif
