/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#ifndef ZAG_TRANSFORMERS_H
#define ZAG_TRANSFORMERS_H

#include <string>
#include <iostream>
#include "composition.h"

class Transformers
{
private:
    bool is_alive;
    std::string name, post;
    int rang;
    Composition power;
    Composition* color;

public:
    Transformers (std::string firstname, bool alife, std::string job, int level, uint t_power, Composition* t_color);

    Transformers();

    ~Transformers();

    std::string getName();
    void setName (std::string firstname);

    std::string getPost();
    void setPost (std::string job);

    int getRang();
    void setRang (int level);

    std::string is_dead();

    uint getPower();
    void setPower (uint t_power);

    std::string getColor();
    void setColor (Composition* dif_color);
};

#endif

