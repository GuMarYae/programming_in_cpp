#include <iostream>
#include "sams_linkedListsOYO.h"

// this would be the .cpp file. int compare is 💥DECLARED💥. here, it is defined
// which is why DATA is being ::scoped
//  since theres no public, this is all defaulted to private
// im making a data type called otherdata and storing it in an address of type Data
// the reason why we're scoping Data is bacause we need to use the value variable inside of it
int Data::compare(const Data &otherData)
{
    if (value < otherData.value)
        return K_I_is_smaller;
    if (value > otherData.value)
        return K_I_is_larger;
    else
        return K_I_is_same;
}
// simple constructor
InternalNode::InternalNode(Data *newData, Node *newNext) : data(newData), next(newNext)
{
}

// a funcion to store a new object in the list
// the object is passed to the node which figures out
// where it goes and inserts it into the list

Node *InternalNode::insert(Data *otherData)

{
    // is the new object bigger or smaller than me
    int result = data->compare(*otherData);

    switch (result)
    {
        // if its the same as me, it goes first
    case K_I_is_same:   // fall through
    case K_I_is_larger: // new data comes before me
    {
        InternalNode *dataNode = new InternalNode(otherData, this);
        return dataNode;
    }
        // it is bigger so pass it to the next node and let it handle it
    case K_I_is_smaller:
        next = next->insert(otherData);
        return this;
    }
    return this; // appease the compiler (satisfy a demand)
}

// if daa comes to me, it must be inserted before me since nothing goes after the tail
Node *TailNode::insert(Data *data)
{
    InternalNode *dataNode = new InternalNode(data, this);
    return dataNode;
}

// the first node in the list, which creates the tail

HeadNode::HeadNode()
{
    next = new TailNode;
}

// since nothing comes before the head, just pass
// the data on to the next node

Node *HeadNode::insert(Data *data)
{
    next = next->insert(data);
    return this;
}

LinkedList::LinkedList() : head(new HeadNode)
{
    // or head = new HeadNode;
}

void LinkedList ::insert(Data *pData)
{
    head->insert(pData);
}