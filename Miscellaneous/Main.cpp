#include <iostream>
#include <vector>
#include <fstream>

#include "Point.h"
#include <string>

using names_t = std::vector<std::string>;

namespace math
{
    template<typename T>
    T max(T a, T b)
    {
        return (a > b) ? a : b;
    }
}

template<typename T>
void StreamOut(std::ostream& ostream, T text)
{
    ostream << text << std::endl;
}

void StreamIn(std::istream& istream, std::string& text)
{
    std::getline(istream, text);
    istream >> text;
}

void print(const names_t& names)
{
    for (std::string name : names)
    {
        std::cout << name << std::endl;
    }
}
int main()
{

    StreamOut(std::cout, "Hello World!");

    /*std::ofstream fstream{ "text.txt" };
    StreamOut(fstream, "Hello!");
    fstream.close();*/

    std::string text;
    std::ifstream ifstream{ "text.txt" };
    if (ifstream.is_open())
    {
        StreamIn(ifstream, text);
        std::cout << text << std::endl;
    }
    ifstream.close();

    math::ipoint_t p1(23, 34);
    math::ipoint_t p2(12, 10);
    math::ipoint_t p3;
    p3 = p1 + p2;

    //std::cout << p1.Add(p2) << std::endl;

    /*names_t names{ "Alex", "Brandon", "Tristin" };
    print(names);
    std::cout << math::max(6, 10) << std::endl;*/


}

