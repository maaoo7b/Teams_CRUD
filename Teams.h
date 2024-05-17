//
// Created by Brayan Cruz on 5/15/2024.
//

#ifndef DOUBLELINKEDLISTS_TEAMS_H
#define DOUBLELINKEDLISTS_TEAMS_H

#include <string>
#include <ostream>
#include "ELigue.h"
#include "ECountry.h"

using namespace std;

class Teams {
public:
    explicit Teams();

    Teams(int idTeam, const string &stadiumName, const string &teamName, ECountry country, ELigue ligue, int capacity,
          bool inRemodelation);

    int getIdTeam() const;

    void setIdTeam(int idTeam);

    const string &getStadiumName() const;

    void setStadiumName(const string &stadiumName);

    const string &getTeamName() const;

    void setTeamName(const string &teamName);

    ECountry getCountry() const;

    void setCountry(ECountry country);

    ELigue getLigue() const;

    void setLigue(ELigue ligue);

    int getCapacity() const;

    void setCapacity(int capacity);

    bool isInRemodelation() const;

    void setInRemodelation(bool inRemodelation);

    friend ostream &operator<<(ostream &os, const Teams &teams);

private:

    int idTeam;
    string stadiumName;
    string teamName;
    ECountry country;
    ELigue ligue;
    int capacity;
    bool inRemodelation;
};


#endif //DOUBLELINKEDLISTS_TEAMS_H
