#include <iostream>
#include "Teams.h"
#include "LinkedDouble.cpp"
#include "ELigue.h"

int main() {
    LinkedDouble<Teams> *teams = new LinkedDouble<Teams>();

    teams->addNodeFirst(Teams(1, "Craven Cottage", "26-07-2000", false, "Fullham F.C", "Fullham-London", 25682,ELigue::PREMIER_LEAGUE));
    teams->addNodeLast(Teams(2, "Emirates Stadium", "22-07-2006", false, "Arsenal F.C", "London", 60704, ELigue::PREMIER_LEAGUE));

    for (Teams teams: teams->getList(false)) {
        cout << teams << "\n" << endl;
    }
}
