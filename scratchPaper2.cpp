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
<<<<<<< HEAD
    srand(time(0));
    int num = 2;
    int num2 = 3;

    num = num2;
    num2 = num;

    std::cout << num << "\n";
    std::cout << num2;
=======
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
>>>>>>> 7049b260a72f9e8b1fde65ee774a26162d9a43a0


    std::cout<<nodeA->data;
}