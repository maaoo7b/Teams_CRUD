//
// Created by Brayan Cruz on 5/16/2024.
//

#include "TeamManagement.h"
#include "LinkedDouble.h"


template<class T>


TeamManagement<T>::TeamManagement() {
    linkedDouble = new LinkedDouble<T>();
}

template<class T>
bool TeamManagement<T>::addTeamFirst(T teamInfo) {
    if (linkedDouble->findInfo(teamInfo.getIdTeam()) == NULL) {
        linkedDouble->addNodeFirst(teamInfo);
        return true;
    }
    return false;
}

template<class T>
bool TeamManagement<T>::addTeamLast(T teamInfo) {
    if (linkedDouble->getObject(teamInfo.getIdTeam()) == NULL) {
        linkedDouble->addNodeLast(teamInfo);
        return true;
    }
    return false;
}

template<class T>
bool TeamManagement<T>::addTeamAfter(int idTeam, T teamInfo) {
    Node<Teams> *aux = new Node<Teams>();
    aux = linkedDouble->findNode(idTeam);
    if (aux != NULL) {
        linkedDouble->addNodeAfterTo(aux, teamInfo);
        return true;
    }
    return false;
}

template<class T>
bool TeamManagement<T>::addTeamBefore(int idTeam, T teamInfo) {
    Node<Teams> *aux = new Node<Teams>();
    aux = linkedDouble->findNode(idTeam);
    if (aux != NULL) {
        linkedDouble->addNodeBeforeTo(aux, teamInfo);
        return true;
    }
    return false;
}

template<class T>
bool TeamManagement<T>::addTeamSorted(T teamInfo) {
    if (linkedDouble->getObject(teamInfo.getIdTeam()) == NULL) {
        linkedDouble->addNodeSorted(teamInfo);
        return true;
    }
    return false;
}


template<class T>
bool TeamManagement<T>::deleteTeam(int idTeam) {
    Node<T> *aux = new Node<T>();
    aux = linkedDouble->findNode(idTeam);
    if (aux != NULL) {
        linkedDouble->deleteNode(aux);
        return true;
    }
    return false;
}

template<class T>
T *TeamManagement<T>::findTeam(int idTeam) {
    if (linkedDouble->getObject(idTeam) != NULL) {
        return linkedDouble->getObject(idTeam);
    }
    return NULL;
}

template<class T>
T *TeamManagement<T>::findTeamInfo(int idTeam) {
    if (linkedDouble->findInfo(idTeam) != NULL) {
        return linkedDouble->findInfo(idTeam);
    }
    return NULL;
}

template<class T>
T TeamManagement<T>::getLastTeam() {
    return linkedDouble->getLast();
}

template<class T>
T TeamManagement<T>::getFirstTeam() {
    return linkedDouble->getFirst();
}


template<class T>
int TeamManagement<T>::getListSize() {
    return linkedDouble->getSize();
}

template<class T>
vector<T> TeamManagement<T>::getListOfTeams(bool direction) {
    return linkedDouble->getList(direction);
}