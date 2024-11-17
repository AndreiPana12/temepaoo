#include "Team.h"
#include "Goalkeeper.h"
#include <cstring>
using namespace std;

// Constructor
Team::Team(const string& teamName) 
    : teamName(new string(teamName)) { // Alocă dinamic string-ul
    cout << "Constructor Team pentru echipa " << *this->teamName << endl;
}

// Move constructor
Team::Team(Team&& other) noexcept
    : teamName(other.teamName), players(std::move(other.players)) { // Mutăm resursele
    other.teamName = nullptr; // Setăm teamName-ul sursă la nullptr pentru a preveni eliberarea memoriei
    cout << "Move Constructor pentru echipa " << *this->teamName << endl;
}

// Destructor
Team::~Team() {
    if (teamName) {
        cout << "Destructor pentru echipa " << *teamName << endl;
        delete teamName;
    }
}

// Adăugare jucător
void Team::addPlayer(const Player& player) {
    players.push_back(make_unique<Player>(player)); // Folosim copy constructor pentru a copia playerul
    cout << "Adăugat jucător " << player.getName() 
         << " în echipa " << *teamName << endl;
}

// Afișare jucători
void Team::displayPlayers() const {
    cout << "Jucători în echipa " << *teamName << ":" << endl;
    for (const auto& player : players) {
        cout << "Nume: " << player->getName()
             << ", Vârstă: " << player->getAge()
             << ", Poziție: " << player->getPosition() << endl;
    }
}
