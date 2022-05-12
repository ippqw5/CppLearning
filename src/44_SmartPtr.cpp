#include<iostream>
#include<string>
#include<memory> 
using std::cout;
using std::cin;
using std::endl;
using std::unique_ptr;
// unique_ptr ,released after going out of the scope
// the unique reference to memory
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
    void Print()
    {
        cout << "Hello " << endl;
    }
};


int main()
{   
    cout << "Scope1" << endl;
    {
        unique_ptr<Entity> e0(new Entity());
        unique_ptr<Entity> e1 = std::make_unique<Entity>(); //更安全，如果构造函数抛出异常 C++14引入
        
        // can not copy unique_ptr
        // unique_ptr<Entity> e2 = e0; copy operate "=" is deleted.
        e1->Print();
    }
    cout << endl<< "Scope2" << endl;
    {
        std::shared_ptr<Entity> sharedPtr;
        {
            std::shared_ptr<Entity> s1 =  std::make_shared<Entity>();
            sharedPtr = s1;
        }//  Not destory here because the count of reference is not zero ,actually one;
    }   // Destory here because the count has been eliminated.

    unique_ptr<int> ptrs[2];
    {
        ptrs[0] = std::make_unique<int>(0);
        ptrs[1] = std::make_unique<int>(1);    
    }
    cout << *(ptrs[0]) << ' ' << *(ptrs[1]) << endl;

    cin.get();
}