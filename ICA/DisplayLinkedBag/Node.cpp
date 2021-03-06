#include "Node.h"
#include <iostream>

using namespace std;

template<class ItemType>
Node<ItemType>::Node()
{
    // next=nullptr;
} // end default constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& anItem) : item(anItem), next(nullptr)
{
} // end constructor

template<class ItemType>
Node<ItemType>::Node(const ItemType& anItem, Node<ItemType>* nextNodePtr) :
        item(anItem), next(nextNodePtr)
{
} // end constructor

template<class ItemType>
void Node<ItemType>::setItem(const ItemType& anItem)
{
    item = anItem;
} // end setItem

template<class ItemType>
void Node<ItemType>::setNext(Node<ItemType>* nextNodePtr)
{
    next = nextNodePtr;
} // end setNext

template<class ItemType>
ItemType Node<ItemType>::getItem() const
{
    return item;
} // end getItem

template<class ItemType>
Node<ItemType>* Node<ItemType>::getNext() const
{
    return next;
} // end getNext
template<class ItemType>
void LinkedBag<ItemType>::displaybBag() const
{
    cout << "The bag contains " << itemCount << " items:\n";
    Node<ItemType>* curPtr = headPtr;
    int counter = 0;
    while((curPtr != nullptr) && (counter < itemCount))
    {
        cout << curPtr->getItem() << endl;
        curPtr = curPtr->getNext();
        counter++;
    }
}

std::ostream &operator<<(std::ostream &Out, const Node<ItemType> &N) {
    return Out << "<N:" << N.Data << ">";
}


template<class ItemType>

std::ostream &display(const  Node<ItemType> &N, std::ostream &Out = std::cout) {
    Out << "N[" << N.Data;
    Node<ItemType> *Curr = N.Next;
    while (Curr != nullptr) {
        Out << "," << Curr->Data;
    }
    return Out << "]";
}
  