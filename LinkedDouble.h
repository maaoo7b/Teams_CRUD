//
// Created by Brayan Cruz on 5/15/2024.
//

#ifndef DOUBLELINKEDLISTS_LINKEDDOUBLE_H
#define DOUBLELINKEDLISTS_LINKEDDOUBLE_H

#include "Node.h"
#include <vector>

using namespace std;

template<class T>
class LinkedDouble {
public:
    LinkedDouble();

    bool isEmpty();

    void addNodeFirst(T);

    void addNodeLast(T);

    void addNodeAfterTo(Node<T> *, T);

    void addNodeBeforeTo(Node<T> *, T);

    Node<T> *findNode(int);

    T *findInfo(int);

    T deleteNode(Node<T> *);

    int getSize();

    T *getObject(int);

    T getFirst();

    T getLast();

    void addNodeSorted(T);

    vector<T> getList(bool);

    virtual ~LinkedDouble();

private:
    Node<T> *head;
    Node<T> *last;

};

#endif //DOUBLELINKEDLISTS_LINKEDDOUBLE_H