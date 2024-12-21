/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#include "avtobot.h"

Avtobot::Avtobot() : Transformers()
    {
        count_of_wins = 0;
        is_main_character = 0;
    }

Avtobot::Avtobot (std::string firstname, bool alife, std::string job, int level,
                  uint t_power, Composition* t_color, uint i_wins,
                  bool b_character = 1):
Transformers (firstname, alife, job, level, t_power, t_color)
    {
        count_of_wins = i_wins;
        is_main_character = b_character;
    }

uint Avtobot::getWins()
    {
        return count_of_wins;
    }
void Avtobot::setWins(uint wins)
    {
        count_of_wins = wins;
    }

bool Avtobot::getCharacter()
    {
        return is_main_character;
    }

void Avtobot::setCharacter (bool character)
    {
        is_main_character = character;
    }
