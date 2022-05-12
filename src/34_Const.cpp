// const is fake keyword, make our code more cleaner and lawful.
// it's just a promise, you had better not break it.
// Always mark your methods const if it doesn't change members, considering const "class"& in some functions.
#include <iostream>
#include <string>

const int MAX_AGE = 90; // MAX_AGE ,it shouldn't be really a variable.

class Enttiy
{
private:
    int m_X, *m_Y;
    mutable int var; // mutable can be changed in const method.
public:
    int GetX() const // can't change the member in class, only works in class.
    {
        var = 2; // Members marked by mutable can be changed in const, it is usually used in debug. 
        return m_X;
    }
    int* GetY()  
    {
        return m_Y;
    }
};

void Print(const Enttiy& e)
{
    std::cout << e.GetY() << std::endl;
    // Without const, GetY() can't promise that it will not change the Entity. 
}

int main()
{
    {
    const int* a = new int; // can't change the value to which it pointed
    // *a = 2; 
    a = (int*) &MAX_AGE;

    int* const b = new int;// can't change the pointer itself,but can change the value
    *b = 2;
    //b = (int*) &MAX_AGE;

    // int const* a = const int* a. the key is const before "*"
    }

    {
        Enttiy e;

    }
    system("pause");
}  