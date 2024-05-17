//
// Created by Brayan Cruz on 5/15/2024.
//

#ifndef DOUBLELINKEDLISTS_NODE_H
#define DOUBLELINKEDLISTS_NODE_H

#include <cstring>

template<class T>
class LinkedDouble;

template<class T>
class Node {
    friend class LinkedDouble<T>;

public:
    Node() {
        next = NULL;
        previous = NULL;
    }

    Node(T info): info(info){
        next = NULL;
        previous = NULL;


    }

    virtual ~Node() {

    }

private:

    T info;
    Node<T> *next;
    Node<T> *previous;
};


#endif //DOUBLELINKEDLISTS_NODE_H
