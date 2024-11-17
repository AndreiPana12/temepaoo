#include "Goalkeeper.h"
#include <iostream>

using namespace std;

// Constructor parametrizat
Goalkeeper::Goalkeeper(const string& name, int age, const string& position, int cleanSheets)
    : Player(name, age, position), cleanSheets(cleanSheets) {
    cout << "Constructor Goalkeeper pentru " << getName() << " cu " << cleanSheets << " clean sheets" << endl;
}

// Metodă pentru a obține clean sheets
int Goalkeeper::getCleanSheets() const {
    return cleanSheets;
}

// Suprascrierea metodei getPosition
string Goalkeeper::getPosition() const {
    return Player::getPosition() + " (Clean Sheets: " + to_string(cleanSheets) + ")";
}

// Destructor
Goalkeeper::~Goalkeeper() {
    cout << "Destructor Goalkeeper pentru " << getName() << endl;
}
