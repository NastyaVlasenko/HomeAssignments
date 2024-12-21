/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment6*/

#include "gtest/gtest.h"
#include "classes.h"
#include "temp_class.h"

TEST (TempClassTest, Class1_True)
{
    Class1 obj;
    TempClass<Class1> objj(obj, 3, {});
    EXPECT_EQ(objj.foo(), true);
}

TEST (TempClassTest, Class1_False)
{
    Class1 obj;
    TempClass<Class1> objj(obj, -3, {});
    EXPECT_EQ(objj.foo(), false);
}

TEST (TempClassTest, Class2_True)
{
    Class2 obj;
    std::vector<float> vec = {1.0f};
    TempClass<Class2> objj(obj, 3, vec);
    EXPECT_EQ(objj.foo(), true);
}

TEST (TempClassTest, Class2_False)
{
    Class2 obj;
    std::vector<float> emptvec;
    TempClass<Class2> objj(obj, 3, emptvec);
    EXPECT_EQ(objj.foo(), false);
}

TEST (TempClassTest, Class3_True)
{
    Class3 obj;
    std::vector<float> vec(3);
    TempClass<Class3> objj(obj, -3, vec);
    EXPECT_EQ(objj.foo(), true);
}

TEST (TempClassTest, Class3_False)
{
    Class3 obj;
    std::vector<float> vec(3);
    TempClass<Class3> objj(obj, 3, vec);
    EXPECT_EQ(objj.foo(), false);
}

TEST (TempClassIntTest, IntAlwaysTrue)
{
    TempClass<int> intobjj(3, 5, {});
    EXPECT_EQ(intobjj.foo(), true);
}

TEST (TempClassDoubleTest, DoubleAlwaysFalse)
{
    TempClass<double> doubleobjj(3.0, 5, {});
    EXPECT_EQ(doubleobjj.foo(), false);
}
