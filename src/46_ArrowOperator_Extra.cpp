#include <iostream>
#include <string>

#include <iostream>
#include <string>

struct Vector3
{
    float x,y,z; // float is 4B, so an object occupies 12B.
    // Supposed we want to find the offset of y
};
int main()
{
    long long offset = (long long)& ((Vector3*)nullptr)->y;
    std::cout << offset << std::endl;
    std::cin.get();
}