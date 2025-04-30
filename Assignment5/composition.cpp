/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#include "composition.h"

Composition::Composition()
{
    strength = 0;
    paint = "Colorless";
}

Composition::Composition(uint power)
{
    strength = power;
}

Composition::Composition(std::string temp_color)
{
    paint = temp_color;
}

Composition::~Composition()
{

}

uint Composition::getStrength()
{
    return strength;
}

void Composition::setStrength(uint i_power)
{
    strength = i_power;
}

std::string Composition::getPaint()
{
    return paint;
}

void Composition::setPaint(std::string s_color)
{
    paint = s_color;
}
