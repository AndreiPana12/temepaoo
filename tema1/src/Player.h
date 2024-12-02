#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <memory>
using namespace std;
class Player {
private:
    unique_ptr<string> name;   // Utilizăm std::string pentru gestionarea automată a memoriei
    int age;
    string position;

public:
    Player(const string& name, int age, const string& position);


    // Copy constructor
    
    // Delete the copy constructor and copy assignment operator
    Player(const Player& other) ;
    
    // Destructor
    ~Player();
    //met de supraincarcare
    bool operator<(const Player& other) const; // Compară după vârstă
    bool operator>(const Player& other) const; // Compară după vârstă
    Player& operator=(const Player& other) ; // Supraincarcarea operatorului de atribuire

    // Metode de acces
    string getName() const;
    int getAge() const;
    virtual string getPosition() const;

};

#endif // PLAYER_H
