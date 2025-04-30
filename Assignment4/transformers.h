/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment4*/

#ifndef ZAG_TRANSFORMERS_H
#define ZAG_TRANSFORMERS_H

#include <string>
#include <memory>
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

    std::string getName() const;
    void setName (std::string firstname);

    std::string getPost() const;
    void setPost (std::string job);

    uint getRang() const;
    void setRang (int level);

    std::string is_dead();

    uint getPower();
    void setPower (uint t_power);

    std::string getColor();
    void setColor (Composition* dif_color);

    bool operator<(const Transformers& a) const
    {
        return this->getRang() < a.getRang();
    }

    bool operator>(const Transformers& a) const
    {
        return this->getRang() > a.getRang();
    }

    bool operator==(const Transformers& a) const
    {
        return this->getRang() == a.getRang();
    }

    friend std::ostream& operator<<(std::ostream& os,const Transformers& a)
    {
        os<<a.getName()<<" "<<a.getPost()<<" "<<a.getRang();
        return os;
    }

};


#endif
