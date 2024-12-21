/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#ifndef ZAG_DECEPTICON_H
#define ZAG_DECEPTICON_H

#include "transformers.h"

class Decepticon:public Transformers
{
private:
    uint count_of_defeats;
    bool is_villain;
public:
    Decepticon();
    Decepticon (std::string firstname, bool alife, std::string job, int level,
             uint t_power, Composition* t_color, uint i_defeats,
             bool b_villain);
    uint getDefeats();
    void setDefeats(uint defeats);
    bool getVillain();
    void setVillain(bool villain);

    virtual void transform() const override
    {
        std::cout<<"Method transform from class Decepticon"<<std::endl;
    }

    virtual void openfire() const override
    {
        std::cout<<"Method openfire from class Decepticon"<<std::endl;
    }

    virtual void ultra() const override
    {
        std::cout<<"Method ultra from class Decepticon"<<std::endl;
    }

};

#endif