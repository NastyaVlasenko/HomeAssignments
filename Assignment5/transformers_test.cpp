/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment3*/

#include "gtest/gtest.h"

#include "transformers.h"
#include "composition.h"
#include "avtobot.h"
#include "decepticon.h"
#include "dinobot.h"

#define str std::string

Composition color_1 ("White");
Composition color_2 ("Black");

Transformers testbot ("Optimus", 1, "General", 5, 100, &color_1)

//class Transformers tests

TEST (Transformers, setName_AND_getName)
{
    str F_n = "bot";
    testbot.setName(F_n);
    ASSERT_EQ(F_n, testbot.getName());
}

TEST (Transformers, setPost_AND_getPost)
{
    str F_p = "bot";
    testbot.setPost(F_p);
    ASSERT_EQ(F_p, testbot.getPost());
}

TEST (Transformers, setRang_AND_getRang)
{
    int F_r = 11;
    testbot.setRang(F_r);
    ASSERT_EQ(F_r, testbot.getRang());
}

TEST (Transformers, setPower_AND_getPower)
{
    uint F_pow = 12;
    testbot.setPower(F_pow);
    ASSERT_EQ(F_pow, testbot.getPower());
}

TEST (Transformers, setColor_AND_getColor)
{
    ASSERT_EQ(color_1.getPaint(), testbot.getColor());
    testbot.setColor(&color_2);
    ASSERT_EQ(color_2.getPaint(), testbot.getColor());
}

//class Avtobot tests

Avtobot testavto ("Optimus", 1, "General", 5, 100, &color_1, 10, 1);

TEST (Avtobot, setName_AND_getName)
{
    str F_n = "bot";
    testavto.setName(F_n);
    ASSERT_EQ(F_n, testavto.getName());
}

TEST (Avtobot, setPost_AND_getPost)
{
    str F_p = "bot";
    testavto.setPost(F_p);
    ASSERT_EQ(F_p, testavto.getPost());
}

TEST (Avtobot, setRang_AND_getRang)
{
    int F_r = 11;
    testavto.setRang(F_r);
    ASSERT_EQ(F_r, testavto.getRang());
}

TEST (Avtobot, setPower_AND_getPower)
{
    uint F_pow = 12;
    testavto.setPower(F_pow);
    ASSERT_EQ(F_pow, testavto.getPower());
}

TEST (Avtobot, setColor_AND_getColor)
{
    ASSERT_EQ(color_1.getPaint(), testavto.getColor());
    testavto.setColor(&color_2);
    ASSERT_EQ(color_2.getPaint(), testavto.getColor());
}

TEST (Avtobot, setWins_AND_getWins)
{
    uint F_w = 5;
    testavto.setWins(F_w);
    ASSERT_EQ (F_w, testavto.getWins());
}

TEST (Avtobot, setCharacter_AND_getCharacter)
{
    bool F_c = 0;
    testavto.setCharacter(F_c);
    ASSERT_EQ (F_c, testavto.getCharacter());
}

// class Decepticon tests

Decepticon testdec ("Megatron", 0, "Boss", 7, 90, &color_1, 9, 0);

TEST (Decepticon, setName_AND_getName)
{
    str F_n = "bot";
    testdec.setName(F_n);
    ASSERT_EQ(F_n, testdec.getName());
}

TEST (Decepticon, setPost_AND_getPost)
{
    str F_p = "bot";
    testdec.setPost(F_p);
    ASSERT_EQ(F_p, testdec.getPost());
}

TEST (Decepticon, setRang_AND_getRang)
{
    int F_r = 11;
    testdec.setRang(F_r);
    ASSERT_EQ(F_r, testdec.getRang());
}

TEST (Decepticon, setPower_AND_getPower)
{
    uint F_pow = 12;
    testdec.setPower(F_pow);
    ASSERT_EQ(F_pow, testdec.getPower());
}

TEST (Decepticon, setColor_AND_getColor)
{
    ASSERT_EQ(color_1.getPaint(), testdec.getColor());
    testdec.setColor(&color_2);
    ASSERT_EQ(color_2.getPaint(), testdec.getColor());
}

TEST (Decepticon, setDefeats_AND_getDefeats)
{
    uint F_d = 5;
    testdec.setDefeats(F_d);
    ASSERT_EQ (F_d, testdec.getDefeats());
}

TEST (Decepticon, setVillain_AND_getVillain)
{
    bool F_v = 0;
    testdec.setVillain(F_v);
    ASSERT_EQ (F_v, testdec.getVillain());
}

//class Dinobot tests

Dinobot testdino ("Grimlock", 1, "Leader", 8, 50, &color_1, "Dinosaur", 1);

TEST (Dinobot, setName_AND_getName)
{
    str F_n = "bot";
    testdino.setName(F_n);
    ASSERT_EQ(F_n, testdino.getName());
}

TEST (Dinobot, setPost_AND_getPost)
{
    str F_p = "bot";
    testdino.setPost(F_p);
    ASSERT_EQ(F_p, testdino.getPost());
}

TEST (Dinobot, setRang_AND_getRang)
{
    int F_r = 11;
    testdino.setRang(F_r);
    ASSERT_EQ(F_r, testdino.getRang());
}

TEST (Dinobot, setPower_AND_getPower)
{
    uint F_pow = 12;
    testdino.setPower(F_pow);
    ASSERT_EQ(F_pow, testdino.getPower());
}

TEST (Dinobot, setColor_AND_getColor)
{
    ASSERT_EQ(color_1.getPaint(), testdino.getColor());
    testdino.setColor(&color_2);
    ASSERT_EQ(color_2.getPaint(), testdino.getColor());
}

TEST (Dinobot, setAltform_AND_getAltform)
{
    str F_a = "dino";
    testdino.setAltform(F_a);
    ASSERT_EQ (F_a, testdino.getAltform());
}

TEST (Dinobot, setSide_AND_getSide)
{    bool F_sd = 0;
     testdino.setSide(F_sd);
    ASSERT_EQ (F_sd, testdino.getSide());
}

// class Composition tests

Composition testpower (100);

TEST (Composition, setStrength_AND_getStrength)
{
    uint F_st = 70;
    testpower.setStrength(F_st);
    ASSERT_EQ(F_st, testpower.getStrength());
}

Composition testcolor ("blue");

TEST (Composition, setPaint_AND_getPaint)
{
    str F_pnt = "gold";
    testcolor.setPaint(F_pnt);
    ASSERT_EQ(F_pnt, testcolor.getPaint()); 
}

