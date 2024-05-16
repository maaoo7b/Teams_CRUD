//
// Created by Brayan Cruz on 5/15/2024.
//

#include "Teams.h"


Teams::Teams() {

}

Teams::Teams(int idTeam, const string &stadiumName, const string &dateOpening, bool inRemodelation,
             const string &teamName, const string &cityName, int capacity, ELigue ligue) : idTeam(idTeam),
                                                                                           stadiumName(stadiumName),
                                                                                           dateOpening(dateOpening),
                                                                                           inRemodelation(
                                                                                                   inRemodelation),
                                                                                           teamName(teamName),
                                                                                           cityName(cityName),
                                                                                           capacity(capacity),
                                                                                           ligue(ligue) {}

int Teams::getIdTeam() const {
    return idTeam;
}

void Teams::setIdTeam(int idTeam) {
    Teams::idTeam = idTeam;
}

const string &Teams::getStadiumName() const {
    return stadiumName;
}

void Teams::setStadiumName(const string &stadiumName) {
    Teams::stadiumName = stadiumName;
}

const string &Teams::getDateOpening() const {
    return dateOpening;
}

void Teams::setDateOpening(const string &dateOpening) {
    Teams::dateOpening = dateOpening;
}

bool Teams::isInRemodelation() const {
    return inRemodelation;
}

void Teams::setInRemodelation(bool inRemodelation) {
    Teams::inRemodelation = inRemodelation;
}

const string &Teams::getTeamName() const {
    return teamName;
}

void Teams::setTeamName(const string &teamName) {
    Teams::teamName = teamName;
}

const string &Teams::getCityName() const {
    return cityName;
}

void Teams::setCityName(const string &cityName) {
    Teams::cityName = cityName;
}

int Teams::getCapacity() const {
    return capacity;
}

void Teams::setCapacity(int capacity) {
    Teams::capacity = capacity;
}

ELigue Teams::getLigue() const {
    return ligue;
}

void Teams::setLigue(ELigue ligue) {
    Teams::ligue = ligue;
}


ostream &operator<<(ostream &os, ELigue ligue) {
    switch (ligue) {
        case ELigue::LA_LIGA:
            os << "La Liga";
            break;
        case ELigue::PREMIER_LEAGUE:
            os << "Premier League";
            break;
        case ELigue::SERIE_A:
            os << "Serie A";
            break;
        case ELigue::BUNDESLIGA:
            os << "Bundesliga";
            break;
        case ELigue::LIGUE_ONE:
            os << "Ligue 1";
            break;
        case ELigue::SÜPER_LIG:
            os << "Süper Lig";
            break;
        default:
            os << "Unknown";
            break;
    }
    return os;
}

ostream &operator<<(ostream &os, const Teams &teams) {
    os << "Team ID: " << teams.getIdTeam() << endl;
    os << "Stadium: " << teams.getStadiumName() << endl;
    os << "Date of Opening: " << teams.getDateOpening() << endl;
    os << "Under Remodelation: " << (teams.isInRemodelation() ? "Yes" : "No") << endl;
    os << "Team Name: " << teams.getTeamName() << endl;
    os << "City: " << teams.getCityName() << endl;
    os << "Capacity: " << teams.getCapacity() << endl;
    os << "League: " << teams.getLigue() << endl;
    return os;
}

