#include<iostream>
#include<string>
// interface 纯虚函数

class Printable
{
public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
    virtual std::string GetName() { return "Entity"; }
    std::string GetClassName() override { return "Entity";  }
};

class Player : public Entity
{
private:
    std::string myName;
public:
    Player ( const std::string& name) 
    : myName(name) { }

    std::string GetName() override {   return myName;  }
    std::string GetClassName() override { return "Player"; }
};

void Print(Printable* p)
{
    std::cout << p->GetClassName() << std::endl;
}
void PrintName(Entity* e)
{
    std::cout << e->GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    Player* p = new Player("Qc");
    std::cout << "Name:" << std::endl;
    PrintName(e);
    PrintName(p);
    std::cout << "Class Name:" << std::endl;
    Print(e);
    Print(p); 

    std::cin.get();  
    return 0;
}