#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::endl;
using std::cin;


class Example
{
public:
    Example()
    {
        cout << "Create Example with " << 0 << endl;
    }
    Example (int x)
    {
        cout << "Create Example with " << x << endl;
    }
};


class Entity
{
private:
    string m_Name;
    int m_Score;
    Example m_Example;
public:
    Entity() //Initialize List will initialize in the order of members we defined.
        : m_Name("Unknown"), m_Score(0),m_Example(8) // So, keep the order of members defined.
    {
        cout << "Initializing..." << endl;
        // m_Example = Example(8); 
        // 如果不适用初始化列表，那么会默认调用一次Example()
        // 我们再使用一次Example(8)覆盖m_exmaple，资源浪费。
        // So,use Initialize List！
    } 
    Entity(const string& name)
    {
        m_Name = name;
    }
    string GetName() {  return m_Name; }
};


int main()
{
    Entity e0;
    // cout << e0.GetName() << endl;
    
    // Entity e1("QC");
    // cout << e1.GetName() << endl;
    cin.get();
}