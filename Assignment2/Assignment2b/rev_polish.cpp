/*Vlasenko Anastasia Igorevna 128044@student.spbu.ru Assignment2b*/

#include "assig2b.h"

inline int problem2::priority(char c)
{
    switch(c)
    {
        case '(': return 1;
        case '+': case '-': return 2;
        case '*': case '/': return 3;
        default: return 0;
    }
}

std::string problem2::rpol()
{
    std::string problem_line;
    std::string reverse_polish;
    std::getline (std::cin, problem_line);
    char* stecklist = new char [problem_line.length()];

    int i = -1;
    for (int t = 0; t < problem_line.length(); ++t)
    {
        if (problem_line[t] == '(')
        {
            i += 1;
            stecklist[i] = problem_line[t];
        }

        if (isdigit(problem_line[t]) || (problem_line[t] == '.'))
        {
            reverse_polish += problem_line[t];
            if (priority(problem_line[t+1]) != 0)
            {
                reverse_polish += " ";
            }

        }

        if ((priority(problem_line[t]) != 0) && ((problem_line[t]) != '('))
        {
            if (priority(problem_line[t]) > priority(stecklist[i]))
            {
                i += 1;
                stecklist[i] = problem_line[t];
            }
            else
            {
                while (priority(problem_line[t]) <= priority(stecklist[i]))
                    {
                        reverse_polish += " ";
                        reverse_polish += stecklist[i];
                        reverse_polish += " ";
                        i -= 1;
                    }
                i += 1;
                stecklist[i] = problem_line[t];
            }
        }
        if (problem_line[t] == ')')
        {
            while (stecklist[i] != '(')
            {
                reverse_polish += " ";
                reverse_polish += stecklist[i];
                reverse_polish += " ";
                i -= 1;
            }
            i -= 1;
        }
    }

    while (i != -1)
    {
        reverse_polish += " ";
        reverse_polish += stecklist[i];
        reverse_polish += " ";
        i -= 1;
    }

   // std::cout<<reverse_polish<<std::endl;

    delete stecklist;

    return reverse_polish;
}
