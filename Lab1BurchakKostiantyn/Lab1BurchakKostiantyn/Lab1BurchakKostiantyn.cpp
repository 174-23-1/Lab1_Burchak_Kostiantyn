#include <iostream>

int main()
{
    
    const int x{ 1 };
    const char y{ -2 };
    const float z{ 3.3 };


    const float result{ (((1.3 * z) - (2.0 * ((y + 1.1 * x) * 0.02))) / (x - y + z)) - 10.0 * y + z };

    std::cout << "Result = " << result;
}