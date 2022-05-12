#include <iostream>
#include <string>

class Entity
{
public:
    void Print() const { std::cout << "Entity" << std::endl; }
};

class ScopePtr
{
private:
    Entity* m_obj;
public:
    ScopePtr(Entity* const obj)
        : m_obj(obj)
    {   }

    ~ScopePtr()
    {
        std::cout << "Deleted m_obj" << std::endl;
        delete m_obj;
    }

    Entity* operator -> ()
    {
        return m_obj;
    }

    const Entity* operator -> () const
    {
        return m_obj;
    }
};

int main()
{
    Entity e0;
    e0.Print();

    Entity* e1;
    (*e1).Print();
    e1->Print();
    // "->" is an operator, instead of (*e).Print();
    // We can override it, "->".
    {
        std::cout << std::endl << "Entered Scope" << std::endl; 

        ScopePtr ptr = new Entity();
        ptr->Print();

        const ScopePtr ptr2 = new Entity(); //const 对象 只能调用 const 方法
        ptr2->Print();
    }

    std::cin.get();
}