#include <cstdio>
#include <array>
#include <iostream>

const int SIZE=5;
auto main () -> int
{
    //I'll just do vector next time...
    std::array<int, SIZE> numbers{1,2,3,4,SIZE};

    //Used range-based for loop
    for(int n : numbers){
        std::cout << n << std::endl;
    }
}