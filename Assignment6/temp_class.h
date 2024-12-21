/*Vlasenko Anastasia Igorevna st128044@student.spbu.ru Assignment6*/

#ifndef TEMPCLASS_H
#define TEMPCLASS_H

#include <vector>

template <typename type>

class TempClass
{
private:
    type t_obj;
    int t_num;
    std::vector<float> t_vec;
public:
    TempClass (type obj) : t_obj(obj), t_num(1), t_vec(1, 1.0f)
    {}
    bool foo()
    {
        return t_obj.bar(t_num, t_vec);
    }
};

template <>

class TempClass<int>
{
private:
    int t_obj;
    int t_num;
    std::vector<float> t_vec;
public:
    TempClass(int object) : t_obj(object), t_num(object), t_vec(1, 1.0f)
    {}
    bool foo()
    {
        return true;
    }
};

template <>
class TempClass<double>
{
private:
    double t_obj;
    int t_num;
    std::vector<float> t_vec;
public:
    TempClass(double object) : t_obj(object), t_num(object), t_vec(1, 1.0f)
    {}
    bool foo()
    {
        return false;
    }
};


#endif
