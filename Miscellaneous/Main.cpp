#include <iostream>
#include <vector>

#include "Point.h"

using names_t = std::vector<std::string>;

namespace math
{
    template<typename T>
    T max(T a, T b)
    {
        return (a > b) ? a : b;
    }
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

    math::ipoint_t p1(23, 34);
    math::ipoint_t p2(12, 10);
    math::ipoint_t p3;
    p3 = p1 + p2;

    //std::cout << p1.Add(p2) << std::endl;
    p3.PrintLocation();

    /*names_t names{ "Alex", "Brandon", "Tristin" };
    print(names);
    std::cout << math::max(6, 10) << std::endl;*/


}

