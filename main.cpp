#include <iostream>
#include <string>
#include <limits>
#include "Teams.h"
#include "LinkedDouble.cpp"
#include "ELigue.h"
#include "TeamManagement.cpp"

using namespace std;

void mainMenu();

void addTeam();

ECountry selectCountry();

ELigue selectLigue();

void getTeams();

void addTeamFirst();

void addTeamLast();

void deleteTeam();

void getFirstTeam();

void getLastTeam();

TeamManagement<Teams> *team = new TeamManagement<Teams>();

int main() {


    mainMenu();

    return EXIT_SUCCESS;
}

void mainMenu() {
    int menuOption;
    const char *mainMenu = "###################### MENU ######################\n"
                           "1) Add team.\n"
                           "2) Add team at first position\n"
                           "3) Add team at last position\n"
                           "4) Add team before\n"
                           "5) Add team after\n"
                           "6) Get first team\n"
                           "7) Get last team\n"
                           "8) Delete team\n"
                           "9) Search team\n"
                           "10) Search team info\n"
                           "11) List teams\n"
                           "12) Exit\n"
                           "###################################################\n"
                           "Type the wanted option: ";
    do {
        cout << mainMenu;
        cin >> menuOption;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer
        switch (menuOption) {
            case 1:
                addTeam();
                break;
            case 2:
                addTeamFirst();
                break;
            case 3:
                addTeamLast();
                break;
            case 6:
                getFirstTeam();
                break;
            case 7:
                getLastTeam();
                break;
            case 8:
                deleteTeam();
                break;
                // Add cases for other options here
            case 11:
                getTeams();
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
    } while (menuOption != 12);
}

void getLastTeam() {
    cout << team->getLastTeam() << "\n" << endl;
}

void getFirstTeam() {
    cout << team->getFirstTeam() << "\n" << endl;
}

void deleteTeam() {
    cout << "Type idTeam to delete: " << endl;
    int idTeam;
    cin >> idTeam;
    team->deleteTeam(idTeam);
    cout << "Team deleted succesfully" << "\n" << endl;
}

void addTeamLast() {
    cout << "Type id team: ";
    int idTeam;
    cin >> idTeam;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer

    cout << "Type stadium name: ";
    string stadiumName;
    getline(cin, stadiumName);

    cout << "Type team name: ";
    string teamName;
    getline(cin, teamName);

    ECountry country = selectCountry();
    ELigue ligue = selectLigue();

    cout << "Stadium's capacity: ";
    int capacity;
    cin >> capacity;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer

    cout << "Stadium under remodelation? (Y/N): ";
    char remodelationInput;
    cin >> remodelationInput;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer
    bool remodelation = (remodelationInput == 'Y' || remodelationInput == 'y');

    team->addTeamLast(Teams(idTeam, stadiumName, teamName, country, ligue, capacity, remodelation));
    cout << "Team added successfully. Press Enter to continue...\n";
    cin.get();
}

void addTeamFirst() {
    cout << "Type id team: ";
    int idTeam;
    cin >> idTeam;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer

    cout << "Type stadium name: ";
    string stadiumName;
    getline(cin, stadiumName);

    cout << "Type team name: ";
    string teamName;
    getline(cin, teamName);

    ECountry country = selectCountry();
    ELigue ligue = selectLigue();

    cout << "Stadium's capacity: ";
    int capacity;
    cin >> capacity;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer

    cout << "Stadium under remodelation? (Y/N): ";
    char remodelationInput;
    cin >> remodelationInput;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer
    bool remodelation = (remodelationInput == 'Y' || remodelationInput == 'y');

    team->addTeamFirst(Teams(idTeam, stadiumName, teamName, country, ligue, capacity, remodelation));
    cout << "Team added successfully. Press Enter to continue...\n";
    cin.get();
}

void getTeams() {
    cout << "Forward (F) or backwards (B) listing?" << endl;
    char wayListingInput;
    cin >> wayListingInput;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer
    bool wayListing = (wayListingInput == 'F' || wayListingInput == 'f');
    for (Teams teams: team->getListOfTeams(wayListing)) {
        cout << teams << endl;
    }

}

void addTeam() {
    cout << "Type id team: ";
    int idTeam;
    cin >> idTeam;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer

    cout << "Type stadium name: ";
    string stadiumName;
    getline(cin, stadiumName);

    cout << "Type team name: ";
    string teamName;
    getline(cin, teamName);

    ECountry country = selectCountry();
    ELigue ligue = selectLigue();

    cout << "Stadium's capacity: ";
    int capacity;
    cin >> capacity;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer

    cout << "Stadium under remodelation? (Y/N): ";
    char remodelationInput;
    cin >> remodelationInput;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer
    bool remodelation = (remodelationInput == 'Y' || remodelationInput == 'y');

    team->addTeamSorted(Teams(idTeam, stadiumName, teamName, country, ligue, capacity, remodelation));
    cout << "Team added successfully. Press Enter to continue...\n";
    cin.get();
}

ELigue selectLigue() {
    cout << "Select league:\n"
            "1) Premier League\n"
            "2) Serie A\n"
            "3) Bundesliga\n"
            "4) La Liga\n"
            "5) Ligue 1\n"
            "6) Eredivisie\n"
            "7) Primeira Liga\n"
            "8) Süper Lig\n"
            "Enter choice: ";
    int ligue;
    cin >> ligue;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer
    switch (ligue) {
        case 1:
            return ELigue::PREMIER_LEAGUE;
        case 2:
            return ELigue::SERIE_A;
        case 3:
            return ELigue::BUNDESLIGA;
        case 4:
            return ELigue::LA_LIGA;
        case 5:
            return ELigue::LIGUE_1;
        case 6:
            return ELigue::EREDIVISIE;
        case 7:
            return ELigue::PRIMEIRA_LIGA;
        case 8:
            return ELigue::SÜPER_LIG;
        default:
            cout << "Invalid choice, defaulting to NO_SELECTED." << endl;
            return ELigue::NO_SELECTED;
    }
}

ECountry selectCountry() {
    cout << "Select country:\n"
            "1) Spain\n"
            "2) England\n"
            "3) Italy\n"
            "4) France\n"
            "5) Germany\n"
            "6) Netherlands\n"
            "7) Portugal\n"
            "8) Turkey\n"
            "Enter choice: ";
    int country;
    cin >> country;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the buffer
    switch (country) {
        case 1:
            return ECountry::SPAIN;
        case 2:
            return ECountry::ENGLAND;
        case 3:
            return ECountry::ITALY;
        case 4:
            return ECountry::FRANCE;
        case 5:
            return ECountry::GERMANY;
        case 6:
            return ECountry::NETHERLANDS;
        case 7:
            return ECountry::PORTUGAL;
        case 8:
            return ECountry::TÜRKEY;
        default:
            cout << "Invalid choice, defaulting to NO_SELECTED." << endl;
            return ECountry::NO_SELECTED;
    }
}
