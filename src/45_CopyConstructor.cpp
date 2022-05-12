#include<iostream>
using std::cout;
using std::cin;
using std::endl;

class String
{
private:
    char* m_Buffer;
    unsigned int m_Size;
public:
    String(const char* string)
    {
        m_Size = sizeof(string);
        m_Buffer = new char[m_Size+1]; //we should add one more Byte for '\0' unless we use like "Cherno" which is const char[7].
        memcpy(m_Buffer,string,m_Size + 1);
    }

    // default Copy method
    String(const String& other) // = delete ,禁用copy
        : m_Size(other.m_Size)
    {   
        cout << "Copy String!" << endl;
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
    }

    ~String()
    {
        delete m_Buffer;
    }
    char& operator[](unsigned int index)
    {
        return m_Buffer[index];
    }

    friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
    stream << string.m_Buffer;
    return stream;
}

void Print(const String& string) // Extra copy unless using reference
{
    cout << string << endl;
}

int main()
{
    {   
        String string = "Cherno"; // "Cherno" is const char [7]
        String second = string; // 浅拷贝 shallow copy & 深拷贝 deep copy
        second[2] = 'a';
        // We copy the members and get two "char* m_Buffer" ,which point to the same memory
        // while going out of the scope,We use ~String() twice to destory them.
        // However, the second ~String() can't find the memory to which m_Buffer pointed.
        Print(string);
        Print(second);
    }
    cin.get(); 
}