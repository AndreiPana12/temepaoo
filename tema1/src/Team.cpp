#include "Team.h"
using namespace std;

// Constructor
Team::Team(const string& teamName) : teamName(teamName) {
    cout << "Constructor Team pentru echipa " << teamName << endl;
}

// Destructor
Team::~Team() {
    cout << "Destructor pentru echipa " << teamName << endl;
}

// Adăugare jucător
void Team::addPlayer(const string& name, int age, const string& position) {
    // Creăm un nou jucător și-l adăugăm în vector
    players.push_back(make_unique<Player>(name, age, position));
    cout << "Adăugat jucător " << name << " în echipa " << teamName << endl;
}




// Afișare jucători
void Team::displayPlayers() const {
    cout << "Jucători în echipa " << teamName << ":" << endl;
    for (const auto& player : players) {
        cout << "Nume: " << player->getName() 
                  << ", Vârstă: " << player->getAge() 
                  << ", Poziție: " << player->getPosition() << endl;
    }
}
//aici codul poate fi inbunatatit la tema 2 folosind copy constructor sau chiar move constructor pentru a nu mai 
//creea de doua ori jucatorii, prima data fiecare ca player iar apoi ca obiect in lista din echipa,dar la tema1 nu avem voie.

