#include <iostream>
// using namespace std;

// in order to make a linked list, you have to make your own variable type first
// 🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻
// with linked list, each element will have two things
// a value and a pointer direction to the next node
// 🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻🔻
class Node
{
    // make sure these are public.. theyre private by default
public:
    Node() : value(0), Next(nullptr) {}
    ~Node() {}
    // each element or each node will store a type integer value and a pointer to the next element
    // sooo, the value 1st
    int value;
    // and 2nd, pointer to the next node..
    // 💥 💥 💥 💥 💥 💥 💥 💥 💥 recommended to put the * NEXT to node to insure the type. This is a pointer (Node*) 💥 💥 💥 💥 💥 💥 💥 💥 💥
    Node *Next;
};

void printList(Node *);

int main()
{

    // after int value and Node* Next, I want to create a pointer to the first value
    // here
    // so head is the first element of a linked list
    // followed by two more element pointers
    //Node is a pointer (Node*) so thats why you use the member acess operator later for the variable name for it (->)
    Node* head = new Node(); //these are all zero by default because of (Node() : value(0)) for now
    Node* second = new Node();
    Node* third = new Node();
    //line 13 is till being used for 32-34

    // "my head node (head node) inside its value property will store the VALUE of 1"
    // to add values, we use value from the class
    head->value = 1; //configuring the vakues with respect to line 13 def constructor
                     //accessing and changing the internal variable
    second->value = 2;
    third->value = 3;
    // so good. we assigned values. Now we need to point them accordingly in order to get to them
    // we need to link the elements of our lists
    //"I want to assign the value and the pointer to the NEXT element"
    head->Next = second;
    second->Next = third;
    third->Next = nullptr;

    // its best to lut them right under each othet but we're doing it like this for a better understanding with these comments
    // but it should be like
    /*
    head->value = 1;
     head->value = 1;
    */
    printList(head);
    return 0;
}
// now we have to print the ements to our user
// all we need in the parameter is the head. Why? because the heads points to second and second pounts to third
// 💥💥💥💥im putting it below int main becaus this is the next step nut theresa prototype above main
// if youre passing a node pointer then you need a node pointer in the parameter as well
void printList(Node * argNode)
{
    while (argNode != nullptr)
    {
        std::cout << argNode->value << std::endl;

        // this tricky line says "im going to change the value of my argNode to
        // whatever argNode NEXT is holding" since head is the 1st argument
        // second will be the uocoming arguement and so on
        argNode = argNode->Next;
      
    }
}

// note.. if you ever get undefined reference to main when, say compiling online (because doublecheckinh online is better)
// it probably because you spelled main wrong lol
