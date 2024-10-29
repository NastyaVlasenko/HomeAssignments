/*Vlasenko Anastasia Igorevna 128044@student.spbu.ru Assignment2b*/

#include "assig2b.h"

double problem2::calc()
{
    std::string polishline;
    getline (std::cin, polishline);
    double* steckline = new double [polishline.length()];
    std::string temp;
    int t = -1;

    for (int i = 0; i < polishline.length(); ++i)
    {
        if ((problem2::priority(polishline[i]) == 0) && (polishline[i] != ' '))
        {
            temp += polishline[i];
        }
        if ((polishline[i] == ' ') && (temp != ""))
        {
            t += 1;
            steckline[t] = std::stod(temp);
            temp = "";
        }
        if (problem2::priority(polishline[i]) != 0)
        {
            if (polishline[i] == '+')
            {
                double a = steckline[t];
                t -= 1;
                double b = steckline[t];
                steckline[t] = a + b;
            }
            if (polishline[i] == '-')
            {
                double a = steckline[t];
                t -= 1;
                double b = steckline[t];
                steckline[t] = b - a;
            }
            if (polishline[i] == '*')
            {
                double a = steckline[t];
                t -= 1;
                double b = steckline[t];
                steckline[t] = a * b;
            }
            if (polishline[i] == '/')
            {
                double a = steckline[t];
                t -= 1;
                double b = steckline[t];
                steckline[t] = b / a;
            }

        }
    }
    double result = steckline[t];
    delete steckline;

    return result;
}
