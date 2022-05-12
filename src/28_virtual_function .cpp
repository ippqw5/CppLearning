#include<iostream>
#include<string>

class Entity
{
public:
    virtual std::string getName(){
        return "Entity";
    }
};

class Player : public Entity
{
private:
    std::string myName;
public:
    Player ( const std::string& name) : myName(name) { }
    std::string getName() override{
        return myName;
    }
};

void PrintName(Entity* e){
    std::cout << e->getName() << std::endl;
}
int main(){
    Entity* e = new Entity();
    Player* p = new Player("Qc");

    PrintName(e);
    PrintName(p); 

    std::cin.get();  
    return 0;
}