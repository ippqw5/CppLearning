#include <iostream>
#include <string>

//void PrintEntity(const Entity& e);

class Entity
{
public:
    int x, y;

    Entity(int x, int y)
    {
        Entity* const e = this;
        this->x = x;
        this->y = y;
        
        PrintEntity(*this);

        Entity& e0 = *this;
        PrintEntity(e0);
    }

    int Getx() const
    {
        const Entity* e = this;
        return x;
    }
    void PrintEntity(const Entity& e)
    {
    // print
    }  
};



int main()
{
    Entity e(1,0);
    std::cin.get();
}