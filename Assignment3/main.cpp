/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#include "assig3.h"

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
}
