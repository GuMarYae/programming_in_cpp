#ifndef CLASSES
#define CLASSES
#include <iostream>

enum
{
    K_I_is_smaller,
    K_I_is_larger,
    K_I_is_same
};

// integers are stored in Data class
class Data
{
private:
    int value;

public:
    // inline constructor
    //// an initialization list. It initializes members before the body of the constructor executes
    ////// you can immedietely use the variable name as the parameter n the initializaion list
    Data(int newVal) : value(newVal) {}

    // destructor
    ~Data() { std::cout << "\nDestructor activated\n"; }

    // using the data address as in the parameter as the actual arguement
    // const because we dont want to be able to modify it once its in as an actual value;
    // soo instead of saying int compare equals ~7 , we're saying int compare is some number
    // the reason why we didnt do int compare; is because we want the number to be a constant and this is the only way to accomplush that
    int compare(const Data&);
    // FUNCTION
    void show() { std::cout << value << std::endl; }
};
////////////////////////////////
//                            //
// forward class declarations //
//                            //
////////////////////////////////
// I honestly dont understand why these are even needed

class Node;
class HeadNode;
class TailNode;
class internalNode;

// an abstract data class (ADT) representing the node object in the list
// Every derived class must override insert() and show()
class Node
{
public:
    Node()
    {
       
    }
    virtual ~Node() { "\n Destructor activated\n"; }
    // two ABS's because a value of 0 is added as a value
    // these are pure virtual functions
    virtual Node *insert(Data *data) = 0;
    virtual void show() = 0;
};

// child of Node (inherited from Node) so it can derive from it
class InternalNode : public Node
{
private:
    Data *data; // the data itself
    Node *next; // the next node in the linked list

public:
    // constructor. when called, inviked or created from an object
    // the object of type data is passed into this parameter, tow arguements
    // 💥💥💥💥💥💥💥💥💥💥💥Note: i had InternalNode(Data *data, Node *next) {}
    // 💥💥💥💥💥💥💥💥💥💥💥with those brackets {} it compares the declaration with the definifion and says the definition is previosly defined
    // One or the other need brackets or just take out the brackets from the .h FIRST
    //rulle of thumb.. always put declarations with a semi colon at the end
    //for the definitions of the declarations, always remove the semi and add brackets.
    
    InternalNode(Data *data, Node *next);
    virtual ~InternalNode()
    {

        delete next;
        delete data;
    }
    virtual Node *insert(Data *data);
    // delegation | delegate
    virtual void show()
    {
        // I think you can put
        //  this->show();
        // this->show();
        data->show();
        next->show();
    }
};

class TailNode : public Node
{
private:
public:
    TailNode() {}
    virtual ~TailNode() {}
    virtual Node *insert(Data *data);
    virtual void show() {}
};

class HeadNode : public Node
{
private:
    Node *next;

public:
    HeadNode();
    virtual ~HeadNode() { delete next; }
    virtual Node *insert(Data *data);
    virtual void show() { next->show(); }
};

// i get get all he credit and none of the work
class LinkedList
{
private:
    HeadNode *head;

public:
    LinkedList();
    ~LinkedList() { delete head; }
    void insert(Data *data);
    void showAll() { head->show(); }
};

#endif
