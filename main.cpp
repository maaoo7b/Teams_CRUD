#include <iostream>
#include "Teams.h"
#include "LinkedDouble.cpp"
#include "ELigue.h"
#include "TeamManagement.cpp"


int main() {


    TeamManagement<Teams>* team = new TeamManagement<Teams>();

    team->addTeamFirst(Teams(1, "Craven Cottage", "26-07-2000", false, "Fullham F.C", "Fullham-London", 25682,
                             ELigue::PREMIER_LEAGUE));
    team->addTeamFirst(Teams(2, "Emirates Stadium", "16-07-2006", false, "Arsenal F.C", "London", 70604,
                             ELigue::PREMIER_LEAGUE));
    team->addTeamFirst(Teams(3, "Anfield", "09-10-1980", false, "Liverpool F.C", "Liverpool", 53394,
                             ELigue::PREMIER_LEAGUE));

    team->addTeamFirst(Teams(3, "Anfield", "09-10-1980", false, "Liverpool F.C", "Liverpool", 53394,
                            ELigue::PREMIER_LEAGUE));


    cout << "SIZE: "<<team->getListSize() << endl;


    return EXIT_SUCCESS;

}
