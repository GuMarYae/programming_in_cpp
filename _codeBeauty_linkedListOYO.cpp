#include <iostream>

class Node
{
public:
    //---------------------
    int value;  //|STORE VALUE        |
                //|----------V---------
    Node *next; //|POINTS(to NEW Node)|
                //---------------------
};

typedef Node *pNode;

int main()
{
    // so we're declaring variables
    // that pNode is a variable type pointer that I made..
    // so its kinda like int, bool, long etc
    // its variable type pNode (or Node* before the typedef)
    pNode head;
    pNode second;
    pNode third;
    // putting all three ofthem in the heap of memory

    head = (new Node);
    second = new Node;
    third = new Node;

    // in order to use the members of the Node class,
    // you have to use the member access operator ->

    head->value = 17;
    // check to see the value
    std::cout << head->value << "\n";
    // link the next element (second) LIKE A CHAIN
    head->next = second;

    second->value = 1000;
    // wooow I tried that alone
    // its saying display the node element that "next" after head element, followed by the
    // value of that same node element after head.
    // print
    std::cout << head->next->value << std::endl;
    // im on a freakin rool.. its 2:32am 3.22.2023
    third->value = second->value - head->value;
    third->next = NULL;
    // print
    std::cout << third->value << "\n"
              << "the third node element points toooooo: " << third->next;

    return 0;
}