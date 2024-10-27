/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#ifndef ZAG_DNOBOT_H
#define ZAG_DINOBOT_H

#include "transformers.h"

class Dinobot:public Transformers
{
private:
    std::string altform;
    bool is_side_character;
public:
    Dinobot();
    Dinobot (std::string firstname, bool alife, std::string job, int level,
             uint t_power, Composition* t_color,
            std:: string s_altform, bool b_side);
    std::string getAltform();
    void setAltform(std::string alt);
    bool getSide();
    void setSide(bool side);
};

#endif
