#include <iostream>
#include "Teams.h"
#include "LinkedDouble.cpp"
#include "ELigue.h"
#include "TeamManagement.cpp"


int main() {


    TeamManagement<Teams> *team = new TeamManagement<Teams>();

    team->addTeamSorted(Teams(1, "Craven Cottage", "26-07-2000", false, "Fullham F.C", "Fullham-London", 25682,ELigue::PREMIER_LEAGUE));
    team->addTeamSorted(Teams(3, "Anfield", "09-10-1980", false, "Liverpool F.C", "Liverpool", 53394, ELigue::PREMIER_LEAGUE));
    team->addTeamSorted(Teams(2, "Camp Nou", "24-09-1957", true, "FC Barcelona", "Barcelona", 99354, ELigue::LA_LIGA));
    team->addTeamSorted(Teams(5, "Allianz Arena", "30-05-2005", false, "FC Bayern Munich", "Munich", 75000, ELigue::BUNDESLIGA));
    team->addTeamSorted(Teams(9, "Parc des Princes", "18-07-1972", false, "Paris Saint-Germain", "Paris", 47929, ELigue::LIGUE_ONE));



    cout << "SIZE: " << team->getListSize() << endl;


    for (Teams t: team->getListOfTeams(true)) {
        cout << t << endl;
    }


    return EXIT_SUCCESS;

}
