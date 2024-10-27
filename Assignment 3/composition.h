/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#ifndef ZAG_COMP_H
#define ZAG_COMP_H

#include <iostream>
#include <string>

class Composition
{
private:
    uint strength;
    std::string paint;
public:
    Composition();
    Composition (uint);
    Composition (std::string);
    ~Composition();
    uint getStrength();
    void setStrength (uint i_power);
    std::string getPaint();
    void setPaint (std::string s_color);
};

#endif
