#include<iostream>
#include<string>

class Entity
{
public:
    Entity()
    {
        std::cout << "Create Entity! " << std::endl; 
    }
    ~Entity()
    {
        std::cout << "Destroy Entity! " << std::endl;
    }
};

class ScopePtr
{
private:
    Entity* m_ptr;
public:
    ScopePtr(Entity* ptr)
    : m_ptr(ptr)
    {}
    ~ScopePtr()
    {
        delete m_ptr;
    }
};

int main()
{
    
    {
    std::cout << "Scope One:" << std::endl;
    Entity e;// 创建在 栈(当前作用域的栈)  中，当离开作用域时 它会被摧毁
    }   
 
    std::cout << std::endl;
    
    {
        std::cout << "Scope Two:" << std::endl;
        Entity* e = new Entity(); // 创建在 堆 中，离开作用域时 不会被摧毁 
    }   // How to delete the Entity in heap automatically after leaving the scope? 

    std::cout << std::endl;
    // Scope Pointer
    {
        std::cout << "Scope Three:" << std::endl;
        Entity* e1 = new Entity();
        ScopePtr p(e1);
    }
    int x = 1;
    std::cin.get();
}