//
// Created by Brayan Cruz on 5/15/2024.
//

#include "LinkedDouble.h"

template<class T>
LinkedDouble<T>::LinkedDouble() {
    head = NULL;
    last = NULL;
}

template<class T>
bool LinkedDouble<T>::isEmpty() {
    return (head == NULL && head == NULL);
}

template<class T>
void LinkedDouble<T>::addNodeFirst(T info) {
    Node<T> *newNode = new Node<T>(info);
    if (isEmpty()) {
        head = newNode;
        last = newNode;
    } else {
        head->previous = newNode;
        newNode->next = head;
        head = newNode;
    }
}

template<class T>
void LinkedDouble<T>::addNodeLast(T info) {
    Node<T> *newNode = new Node<T>(info);
    if (isEmpty()) {
        head = newNode;
        last = newNode;
    } else {
        last->next = newNode;
        newNode->previous = last;
        last = newNode;
    }
}

template<class T>
void LinkedDouble<T>::addNodeSorted(T info) {
    Node<T> *node = new Node<T>(info);
    if (isEmpty()) {
        head = node;
    } else {
        Node<T> *actual = head;
        Node<T> *previous = NULL;

        while (actual != NULL && node->info.getIdTeam().compare(actual->info.getIdTeam()) > 0) {
            previous = actual;
            actual = actual->next;
        }
        if (previous == NULL) {
            head = node;
        } else {
            previous->next = node;
        }
        node->next = actual;
    }
}

template<class T>
void LinkedDouble<T>::addNodeAfterTo(Node<T> *after, T info) {
    if (after = last) {
        addNodeLast(info);
    } else {
        Node<T> *node = new Node<T>(info);
        node->next = after->next;
        after->next = node;
        node->previous = after;
        node->next->previous = node;
    }
}

template<class T>
void LinkedDouble<T>::addNodeBeforeTo(Node<T> *before, T info) {
    if (before == head) {
        addNodeFirst(info);
    } else {
        Node<T> *node = new Node<T>(info);
        node->next = before;
        before->previous->next = node;
        node->previous = before->previous;
        before->previous = node;
    }
}

template<class T>
Node<T> *LinkedDouble<T>::findNode(int idTeam) {
    Node<T> *aux = head;
    while (aux != NULL) {
        if (aux->info.getIdTeam().compare(idTeam) == 0) {
            return aux;
        }
        aux = aux->next;
    }
    return NULL;
}

template<class T>
T *LinkedDouble<T>::findInfo(int idTeam) {
    Node<T> *aux = head;
    while (aux != NULL) {
        if (aux->info.getIdTeam().compare(idTeam == 0)) {
            return &aux->info;
        }
        aux = aux->next;
    }
    return NULL;
}

template<class T>
T LinkedDouble<T>::deleteNode(Node<T> *node) {
    Node<T> *previous = NULL;
    Node<T> *next = NULL;
    T out = node->info;
    if (node == head) {
        head = head->next;
        if (node->next != NULL) {
            node->next->previous = NULL;
        }
    } else if (node == last) {
        previous = node->previous;
        node->previous = NULL;
        previous->next = NULL;
    } else {
        previous = node->previous;
        node->previous = NULL;
        next = node->next;
        node->next = NULL;
        previous->next = next;
        next->previous = previous;
    }
    delete (node);
    return out;
}

template<class T>
vector<T> LinkedDouble<T>::getList(bool forward) {
    vector<T> out;
    Node<T> *aux = forward ? head : last;
    while (aux != NULL) {
        out.push_back(aux->info);
        aux = forward ? aux->next : aux->previous;
    }
    return out;
}

template<class T>
T *LinkedDouble<T>::getObject(int neededPos) {
    int pos = 0;
    Node<T> *aux = head;
    if (neededPos >= 0 && neededPos < getSize()) {
        while (pos != neededPos) {
            aux = aux->next;
            pos++;
        }
        return &aux->info;
    }
    return NULL;
}

template<class T>
int LinkedDouble<T>::getSize() {
    Node<T> *node = head;
    int cont = 0;
    while (node != NULL) {
        cont++;
        node = node->next;
    }
    return cont;
}

template<class T>
T LinkedDouble<T>::getLast() {
    Node<T> *aux = head;
    while (aux->next != NULL) {
        aux = aux->next;
    }
    return aux->info;
}

template<class T>
T LinkedDouble<T>::getFirst() {
    return head->info;
}

template<class T>
LinkedDouble<T>::~LinkedDouble() {

}