#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
using namespace std;
class Player {
private:
    string name;   // Utilizăm std::string pentru gestionarea automată a memoriei
    int age;
    string position;

public:
    // Constructor parametrizat
    Player(const string& name, int age, const string& position);
    
    // Destructor
    ~Player();
    //met de supraincarcare
    bool operator<(const Player& other) const; // Compară după vârstă
    bool operator>(const Player& other) const; // Compară după vârstă
    // Metode de acces
    string getName() const;
    int getAge() const;
    string getPosition() const;
};

#endif // PLAYER_H
