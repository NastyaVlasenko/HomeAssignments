/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#ifndef ZAG_AVTOBOT_H
#define ZAG_AVTOBOT_H

#include "transformers.h"

class Avtobot:public Transformers
{
private:
    uint count_of_wins;
    bool is_main_character;
public:
    Avtobot();
    Avtobot (std::string firstname, bool alife, std::string job, int level,
             uint t_power, Composition* t_color, uint i_wins, bool b_character);
    uint getWins() const;
    void setWins(uint wins);
    bool getCharacter();
    void setCharacter(bool character);
    friend std::ostream& operator<<(std::ostream& s, const Avtobot& a)
    {
        s<<a.getName()<<" "<<a.getPost()<<" "<<a.getRang()<<" "<<a.getWins();
        return s;
    }

};
#endif

