#include <iostream>
// using namespace std;

// g++ -o test .\codeBeauty_linkedLists3.cpp

class Node
{
public:
    int value;

    Node *next;
};

void printList(Node * head_n);

int main()
{

    Node *head;
    Node *second;
    Node *tail;

    head = new Node();
    second = new Node();
    tail = new Node();

    head->value = 11;
    // this is how the next works. when you assign a variable to another one
    head->next = second;
    second->value = (head->value - 4);
    // this again, is how the next works. when you assign a variable to another one
    second->next = tail;
    tail->value = (second->value + 10000000);
    tail->next = NULL;

    printList(head);
}

void printList(Node *n)
{
    while (n != NULL)
    {
        std::cout << n->value << " "; // print the value
        n = n->next;
    }
}