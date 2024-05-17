//
// Created by Brayan Cruz on 5/15/2024.
//

#include "Teams.h"

Teams::Teams() {

}

Teams::Teams(int idTeam, const string &stadiumName, const string &teamName, ECountry country, ELigue ligue,
             int capacity, bool inRemodelation) : idTeam(idTeam), stadiumName(stadiumName), teamName(teamName),
                                                  country(country), ligue(ligue), capacity(capacity),
                                                  inRemodelation(inRemodelation) {}

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

const string &Teams::getTeamName() const {
    return teamName;
}

void Teams::setTeamName(const string &teamName) {
    Teams::teamName = teamName;
}

ECountry Teams::getCountry() const {
    return country;
}

void Teams::setCountry(ECountry country) {
    Teams::country = country;
}

ELigue Teams::getLigue() const {
    return ligue;
}

void Teams::setLigue(ELigue ligue) {
    Teams::ligue = ligue;
}

int Teams::getCapacity() const {
    return capacity;
}

void Teams::setCapacity(int capacity) {
    Teams::capacity = capacity;
}

bool Teams::isInRemodelation() const {
    return inRemodelation;
}

void Teams::setInRemodelation(bool inRemodelation) {
    Teams::inRemodelation = inRemodelation;
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
        case ELigue::LIGUE_1:
            os << "Ligue 1";
            break;
        case ELigue::SÜPER_LIG:
            os << "Süper Lig";
            break;
        case ELigue::EREDIVISIE:
            os << "Erevidisie";
            break;
        case ELigue::PRIMEIRA_LIGA:
            os << "Primeira Liga";
            break;
        default:
            os << "Unknown";
            break;
    }
    return os;
}

ostream &operator<<(ostream &os, const ECountry &country) {
    switch (country) {
        case ECountry::SPAIN:
            os << "Spain";
            break;
        case ECountry::ENGLAND:
            os << "England";
            break;
        case ECountry::ITALY:
            os << "Italy";
            break;
        case ECountry::GERMANY:
            os << "Germany";
            break;
        case ECountry::FRANCE:
            os << "France";
            break;
        case ECountry::TÜRKEY:
            os << "Turkey";
            break;
        default:
            os << "Unknown";
            break;
    }
    return os;
}

ostream &operator<<(ostream &os, const Teams &teams) {
    os << "Team ID: " << teams.idTeam << "\n"
       << "Stadium Name: " << teams.stadiumName << "\n"
       << "Team Name: " << teams.teamName << "\n"
       << "Country: " << teams.country << "\n"
       << "Ligue: " << teams.ligue << "\n"
       << "Capacity: " << teams.capacity << "\n"
       << "In Remodelation: " << (teams.inRemodelation ? "Yes" : "No") << "\n";
    return os;
}

