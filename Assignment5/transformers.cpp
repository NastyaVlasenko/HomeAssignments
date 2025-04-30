/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment4*/

#include "transformers.h"
#include "composition.h"

Transformers::Transformers() {}

Transformers::~Transformers() {}

Transformers::Transformers(std::string firstname, bool alive, std::string job, int level, uint t_power, Composition* t_color) :color(t_color)
    {
        name = firstname;
        is_alive = alive;
        post = job;
        rang = level;
        power.setStrength(t_power);
    }

std::string Transformers::getName() const
    {
        return name;
    }
void Transformers::setName(std::string firstname)
    {
        name = firstname;
    }

std::string Transformers::getPost() const
    {
        return post;
    }
void Transformers::setPost(std::string job)
    {
        post = job;
    }

uint Transformers::getRang() const
    {
        return rang;
    }
void Transformers::setRang(int level)
    {
        rang = level;
    }

std::string Transformers::is_dead()
    {
        if (is_alive)
        {
            return "Alive";
        }
        else
        {
            return "Dead";
        }
    }

uint Transformers::getPower()
    {
        return power.getStrength();
    }

void Transformers::setPower(uint t_power)
    {
        power.setStrength(t_power);
    }

std::string Transformers::getColor()
    {
        return (*color).getPaint();
    }

void Transformers::setColor (Composition* dif_color)
    {
        color = dif_color;
    }
