/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#include "dinobot.h"

Dinobot::Dinobot() : Transformers()
    {
        altform = "None";
        is_side_character = 0;
    }

Dinobot::Dinobot (std::string firstname, bool alife, std::string job, int level,
                  uint t_power, Composition* t_color, std::string s_altform,
                  bool b_side = 1):
Transformers (firstname, alife, job, level, t_power, t_color)
    {
        altform = s_altform;
        is_side_character = b_side;
    }

std::string Dinobot::getAltform()
    {
        return altform;
    }
void Dinobot::setAltform(std::string alt)
    {
        altform = alt;
    }

bool Dinobot::getSide()
    {
        return is_side_character;
    }

void Dinobot::setSide (bool side)
    {
        is_side_character = side;
    }
