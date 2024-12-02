#include "Player.h"
#include <memory>
using namespace std;

// Copy constructor
Player::Player(const string& name, int age, const string& position)
    : name(make_unique<string>(name)), age(age), position(position) {
    cout << "Constructor parametrizat Player pentru " << *this->name << endl;
}


Player::Player(const Player& other)
    : name(make_unique<string>(*other.name)), age(other.age), position(other.position) {
    cout << "Copy constructor pentru " << *this->name << endl;
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
        name = make_unique<string>(*other.name); // Create a new copy of the string
        age = other.age;
        position = other.position;
    }
    return *this;
}

// Destructor
Player::~Player() {
    cout << "Destructor pentru Player " << *name << endl;
}

// Metode de acces
string Player::getName() const { return *name; }
int Player::getAge() const { return age; }
string Player::getPosition() const { return position; }
