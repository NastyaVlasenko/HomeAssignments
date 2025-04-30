/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment4*/

#include "assig3.h"
#include <vector>

int main()
{
    Composition red_color ("Red");
    Composition yellow_color ("Yellow");
    Composition blue_color ("Blue");
    Avtobot optimus ("Optimus Prime", 1, "Boss", 10, 50, &red_color, 7, 1);
    std::cout<<optimus.is_dead()<<std::endl;
    std::cout<<optimus.getRang()<<std::endl;
    std::cout<<optimus.getPower()<<std::endl;
    std::cout<<optimus.getColor()<<std::endl;
    std::cout<<optimus.getWins()<<std::endl;
    std::cout<<optimus.getCharacter()<<std::endl;
    Decepticon megatron ("Megatron", 1, "General", 10, 70, &blue_color, 8, 1);
    std::cout<<megatron.getName()<<std::endl;
    std::cout<<megatron.getColor()<<std::endl;
    std::cout<<megatron.getVillain()<<std::endl;
    std::cout<<megatron.getDefeats()<<std::endl;
    Dinobot grimlock ("Grimlock", 1, "Boss of dinobots", 9, 40, &yellow_color, "T-rex", 1);
    std::cout<<grimlock.getAltform()<<std::endl;
    std::cout<<grimlock.getSide()<<std::endl;

    //Part of Assignment 4:
    std::cout<<"\n";
    Avtobot bumblebee ("Bumblebee", 1, "Helper", 7, 40, &yellow_color, 6, 1);
    std::cout<<optimus<<std::endl;
    std::cout<<(optimus < bumblebee)<<std::endl;
    std::cout<<megatron<<std::endl;
    std::cout<<(optimus == megatron)<<std::endl;

    //Part of Assignment 5:
    std::cout<<"\n";
    Transformers tr;
    tr.transform();
    tr.openfire();
    tr.ultra();

    Avtobot avt;
    avt.transform();
    avt.openfire();
    avt.ultra();

    Decepticon dec;
    dec.transform();
    dec.openfire();
    dec.ultra();

    std::cout<<"\n";

    Transformers* t1 = new Avtobot();
    t1 -> transform();
    t1 -> openfire();
    t1 -> ultra();

    std::cout<<"\n";

    std::vector<Transformers*> bots;

    for (int i=0; i<3; ++i)
    {
        bots.push_back(new Transformers());
        bots.push_back(new Avtobot());
        bots.push_back(new Decepticon());
    }

    std::cout<<"\n";

    for (Transformers* bot : bots)
    {
        bot -> transform();
        bot -> openfire();
        bot -> ultra();
        delete bot;
    }
    return 0;
}
