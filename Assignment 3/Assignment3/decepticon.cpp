/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#include "decepticon.h"

Decepticon::Decepticon() : Transformers()
    {
        count_of_defeats = 0;
        is_villain = 0;
    }

Decepticon::Decepticon (std::string firstname, bool alife, std::string job, int level,
                  uint t_power, Composition* t_color, uint i_defeats,
                  bool b_villain = 1):
Transformers (firstname, alife, job, level, t_power, t_color)
    {
        count_of_defeats = i_defeats;
        is_villain = b_villain;
    }

uint Decepticon::getDefeats()
    {
        return count_of_defeats;
    }
void Decepticon::setDefeats(uint defeats)
    {
        count_of_defeats = defeats;
    }

bool Decepticon::getVillain()
    {
        return is_villain;
    }

void Decepticon::setVillain (bool villain)
    {
        is_villain = villain;
    }
