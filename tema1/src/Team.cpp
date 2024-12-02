#include "Team.h"
#include "Goalkeeper.h"
#include <cstring>
using namespace std;

// Constructor
Team::Team(const string& teamName)
    : teamName(make_unique<string>(teamName)) { // Use std::make_unique
    cout << "Constructor Team pentru echipa " << *this->teamName << endl;
}

// Move constructor
Team::Team(Team&& other) noexcept
    : teamName(move(other.teamName)), players(move(other.players)) {
    cout << "Move Constructor pentru echipa " << *this->teamName << endl;
}

// Destructor
Team::~Team() {
    if (teamName) {
        cout << "Destructor pentru echipa " << *teamName << endl;
        //delete teamName;
    }
}

// Adăugare jucător
void Team::addPlayer(const Player& player) {
    lock_guard<mutex> lock(mtx); // Lock the mutex
    players.push_back(make_unique<Player>(player)); 
    cout << "Adăugat jucător " << player.getName() << " în echipa " << *teamName << endl;
}



// Afișare jucători
void Team::displayPlayers() const {
    lock_guard<mutex> lock(mtx); // Lock the mutex
    cout << "Jucători în echipa " << *teamName << ":" << endl;
    for (const auto& player : players) {
        cout << "Nume: " << player->getName()
             << ", Vârstă: " << player->getAge()
             << ", Poziție: " << player->getPosition() << endl;
    }
}
