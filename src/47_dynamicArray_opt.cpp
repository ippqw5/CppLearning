// optimization about Vectoc
// To optimize , we have to know our environment, knowing how things work
#include <iostream>
#include <vector>

struct Vertex
{
    float x, y, z;

    Vertex(float x1, float y1, float z1)
        : x(x1), y(y1) , z(z1)
    {

    }

    Vertex(const Vertex& vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copy Vector" << std::endl;
    }
};

int main()
{   

    std::vector<Vertex> vertices;

    vertices.push_back(Vertex(1, 2 ,3));
    vertices.push_back(Vertex(4, 5, 6));
    vertices.push_back(Vertex(7, 8, 9));
    /* 
       6 copies
       Vertex(1, 2 ,3) is in main function and We copy it into vector.
       So, it will take 3 copies.
       
       The capacity of vertices is 1 by initalized. 2^0
       Once the capacity is not enough, its capacity will be doubled somewhere ,copy the data to new memory and delete the old memory  
    */

    std::vector<Vertex> v;
    v.reserve(3);
    v.push_back(Vertex(1, 2 ,3));
    v.push_back(Vertex(4, 5, 6));
    v.push_back(Vertex(7, 8, 9));
    // three copies
   
    std::vector<Vertex> w;
    w.reserve(3);
    w.emplace_back(1,2,3); 
    w.emplace_back(4,5,6);
    w.emplace_back(7,8,9);
    // emplace_back 在vector分配的内存上直接创建对象 no copies
 
    std::cin.get();
}

