//
// Created by Brayan Cruz on 5/16/2024.
//

#ifndef DOUBLELINKEDLISTS_TEAMMANAGEMENT_H
#define DOUBLELINKEDLISTS_TEAMMANAGEMENT_H

#include "Node.h"
#include "Teams.h"
#include "LinkedDouble.h"
#include <vector>

template<class T>
class TeamManagement {
public:
    TeamManagement();

    bool isEmpty();

    bool addTeamFirst(T);

    bool addTeamLast(T);

    bool addTeamAfter(Node<T> *, T);

    bool addTeamBefore(Node<T> *, T);

    bool addTeamSorted(T);

    bool deleteTeam(Node<T> *);

    Node<T> *findTeam(int);

    T *findTeamInfo(int);

    int getListSize();

    T getFirstTeam();

    T getLastTeam();

    std::vector<T> getListOfTeams(bool);
private:
    LinkedDouble<T> *linkedDouble;
};



#endif //DOUBLELINKEDLISTS_TEAMMANAGEMENT_H
