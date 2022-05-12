/*
可见性： 纯粹是存在于语言的东西，对程序运行、性能等无影响
只是为了让你更好地组织代码、写出更好的代码。

public
private
protected
 
*/
#include<iostream>
#include<string>

class Entity
{
    //default : private

private: // Only Entity can access members
    int X;
    void Print() {}
protected: // Entity and all subClass of Entity can access
    int Y;
    void Print_Y() {};
public: // Anywherecan access
    Entity()
    {
        X = 0;
        Print();
    }
};

class Player : public Entity
{
public:
    Player()
    {
        Y = 2;
        Print_Y();
    }
};

int main()
{   
    Entity e;
    e.Print(); // Error: private
    e.X;
    // if you mark something privated,it asking others,including yourself,you shouldnt access it from other classes.
    // you should only access it in the internal class
    std::cin.get();
}