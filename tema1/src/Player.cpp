#include "Player.h"
using namespace std;

// Constructor parametrizat
Player::Player(const string& name, int age, const string& position)
    : name(name), age(age), position(position) { // Inițializare directă
    cout << "Constructor parametrizat Player pentru " << this->name << endl;
}

bool Player::operator<(const Player& other) const {
    return age < other.age; // Compară vârstele
}

// Supraincarcarea operatorului > (compară după vârstă)
bool Player::operator>(const Player& other) const {
    return age > other.age; // Compară vârstele
}

// Supraincarcarea operatorului de atribuire (necesar pentru alocarea dinamică)
Player& Player::operator=(const Player& other) {
    if (this != &other) {
        this->name = other.name; // Copiază valoarea string-ului
        age = other.age; // Copiază vârsta
        position = other.position; // Copiază poziția
    }
    return *this; // Returnează obiectul curent
}

// Destructor
Player::~Player() {
    cout << "Destructor pentru Player " << name << endl;
}

// Metode de acces
string Player::getName() const { return name; }
int Player::getAge() const { return age; }
string Player::getPosition() const { return position; }
