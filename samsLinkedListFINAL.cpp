#include <iostream>

class Data
{
private:
    int value;

public:
    // constructor with initialization list -----> : value(newVal)
    // this would usually be inside the {} stating {value = newVal}
    Data(int newVal) : value(newVal) {}
    // destructor
    ~Data() {}
    // function
    void show() { std::cout << value; }
};

// class Node;
// class headNode;
// class tailNode;
// class InternalNode;

// nd ADT ()abstract datatype representing the node object in the list
// every derived class must override insert() and show()
// meaning ADT has atleast 1 pure function that makes derived class use their own function
// if its virtual in "THIS" class. in this case, show and insert is.

class Node
{
    // nothing in private
public:
    Node() {}
    virtual ~Node() {}
    virtual Node *insert(Data *data) = 0; // type "Node pointer" named insert is using type "Data pointer" and making it 0;
                                          // this means since its virtual and sonce its 0, the aswer for insert will be 0 no matter what
                                          // thats why its an ADT so the classes derived from Node will use their own insert functions
    virtual void show() = 0;              // usually, when you are declaring a type name, it has to have a value and a function has {}.  but since this is virtual
                                          // im guessing thats its normal to give the data names "insert" and "show" values since theyre virtual. as long as theystill have the parens ()
};

class InternalNode : public Node
{
private:
    // 💡💡💡remember the * stores an address inside of a variable name💡💡💡💡
    //  the data itself
    // a variable named data whos is of type Data with a pointer
    Data *data;
    // points to the next npde in the linked list
    // a variable named next whos is of type Node with a pointer
    Node *next;

public:
    InternalNode(Data *data, Node *next);
    virtual ~InternalNode()
    {
        delete next;
        delete data;
    }
    virtual Node *insert(Data *data);

    virtual void show()
    {
        // this class seems very similar to codebeautys informal video.. see if you can compare them
        // for a better understanding

        // delegate
        data->show();
        next->show();
    }
};

// simple constructor
InternalNode::InternalNode(Data *newData, Node *newNext) : data(newData), next(newNext)
{
}
/*
this is commented out bc i thing its comparing nodes

// scoping the constructor from class internalNode
// remember, youre scoping. above you were declaring internalNode constructor. here, youre building/defining it.
InternalNode::InternalNode(Data *newData, Node *newNext):data(newData), next(newNext) {

     //or you can write data = newData, next = newNext;
}

 //scoping the insert virtual function.. when defining it you have to give it a type instad of writing virtual twice
 //c++ already knows its virtual so here, when defining it, you have to give it a type, like int for example..  but this one is of type Node, an adress at that
 //remember,were using * like crazy because were passing a node around with a value.. we dont wanna pass around just a value
 //we wanna pass around the address that holds the value and remember, *, like node*, is holding the address that we want to pass around. so, we'repassing around
 //addresses that stores values. so we need * almost all the time
 Node* InternalNode::insert(Data* otherData){}
 */
//I switched this up from the normal one so i can understand the idea better
//------------------------------------------------------------------------------
Node *InternalNode::insert(Data *otherData)
{
    // is the new guy bigger or smaller than me?
    Data *result = otherData;

    InternalNode *dataNode =
        new InternalNode(otherData, this);
    return dataNode;

    return this; // appease the compiler
}
//------------------------------------------------------------------------------

class TailNode : public Node
{
    // private empty
public:
    // constructor
    TailNode() {}
    // destructor
    virtual ~TailNode() {}
    virtual Node *insert(Data *data);
    virtual void show() {}
};

// scoping the insert virtual function.. when defining it you have to give it a type instad of writing virtual twice
// c++ already knows its virtual so here, when defining it, you have to give it a type, like int for example..  but this one is of type Node, an adress at that
// remember,were using * like crazy because were passing a node around with a value.. we dont wanna pass around just a value
// we wanna pass around the address that holds the value and remember, *, like node*, is holding the address that we want to pass around. so, we're passing around
// addresses that stores values. so we need * almost all the time

// defined insert function thats in class tailNode
// im scoping TailNode so i can build the insert function
// im using tyep Node pointer as a datatype
Node *TailNode::insert(Data *data)
{
    // made a vaiable name dataNode of type InternalNode and storing it in the heap with the value of data
    // 💡💡💡 I have to look at what "this" does again. I believe its saying "youre using THIS as the value." but for this block of code
    // 💡💡im not sure what THIS is.. ill find out
    InternalNode *dataNode = new InternalNode(data, this);
    return dataNode;
}

class HeadNode : public Node
{
    Node *next;
    // private empty
public:
    // constructor
    HeadNode();
    // destructor
    virtual ~HeadNode() { delete next; }
    virtual Node *insert(Data *data);
    // soo yea, this is a finction so even when using it after naming the function, i still have to use the ()
    virtual void show() { next->show(); }
};

// the first node on the list which creages the tail
HeadNode::HeadNode()
{
    // without virtual void show inside of tailNode, this wont work..  i just put this comment here cause I was annoyed
    // as to why it wasnt showng
    next = new TailNode;
}

// since othing comes bfore the head, just pass the data on to the next node
Node *HeadNode::insert(Data *data)
{
    next = next->insert(data);
    return this;
}

// i get all the credit and do none of the work

class LinkedList
{
    HeadNode *head;

public:
    LinkedList();
    ~LinkedList() { delete head; }
    void insert(Data *data);
    void showAll() { head->show(); }
};

// at birth, i create the headNode which creates the tailNode

LinkedList::LinkedList()
{

    head = new HeadNode;
}

// delegate to a headNode

void LinkedList::insert(Data *pData)
{

    head->insert(pData);
}

// put all classes to the test

int main()
{

    Data *pData;
    int val;
    LinkedList ll;

    // store user values in a linnked lis

    while (true)
    {

        std::cout << "what value (o to stop) ? \n";
        std::cin >> val;
        if (!val)
            break;
        pData = new Data(val);
        ll.insert(pData);
    }

    // display the list
    ll.showAll();

    return 0;
};