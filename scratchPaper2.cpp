#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <sstream>
#include <vector>

class Box
{
public:
    int data;
    Box *next;
    // constructor
    
    Box(int data)
    {
        this->data = data;
        std::cout << this->data;
    }
};

typedef Box* pBox;

int main()
{
    pBox nodeA;
    pBox nodeB;
    pBox nodeC;
    pBox nodeE;
    pBox nodeF;

    nodeA = new Box(6);
    nodeB = new Box(0);
    nodeC = new Box(4);
    nodeF = new Box(2);
    nodeE = new Box(1);


    std::cout<<nodeA->data;
}