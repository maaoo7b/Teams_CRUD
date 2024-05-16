//
// Created by Brayan Cruz on 5/15/2024.
//

#ifndef DOUBLELINKEDLISTS_TEAMS_H
#define DOUBLELINKEDLISTS_TEAMS_H

#include <string>
#include <ostream>
#include "ELigue.h"

using namespace std;

class Teams {
public:
    Teams();

    Teams(int idTeam, const string &stadiumName, const string &dateOpening, bool inRemodelation, const string &teamName,
          const string &cityName, int capacity, ELigue ligue);

    int getIdTeam() const;

    void setIdTeam(int idTeam);

    const string &getStadiumName() const;

    void setStadiumName(const string &stadiumName);

    const string &getDateOpening() const;

    void setDateOpening(const string &dateOpening);

    bool isInRemodelation() const;

    void setInRemodelation(bool inRemodelation);

    const string &getTeamName() const;

    void setTeamName(const string &teamName);

    const string &getCityName() const;

    void setCityName(const string &cityName);

    int getCapacity() const;

    void setCapacity(int capacity);

    ELigue getLigue() const;

    void setLigue(ELigue ligue);

    friend ostream &operator<<(ostream &os, const Teams &teams);

private:

    int idTeam;
    string stadiumName;
    string dateOpening;
    bool inRemodelation;
    string teamName;
    string cityName;
    int capacity;
    ELigue ligue;
};


#endif //DOUBLELINKEDLISTS_TEAMS_H
