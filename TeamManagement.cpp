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
bool TeamManagement<T>::addTeamFirst(T team) {
    if(linkedDouble->findInfo(team.getIdTeam()) == NULL){
        linkedDouble->addNodeFirst(team);
        return true;
    }
    return false;
}

template<class T>
bool TeamManagement<T>::addTeamLast(T team) {
    if(linkedDouble->getObject(team.getIdTeam()) == NULL){
        linkedDouble->addNodeLast(team);
        return true;
    }
    return false;
}

template<class T>
int TeamManagement<T>::getListSize() {
    return linkedDouble->getSize();
}