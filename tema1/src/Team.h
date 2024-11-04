#ifndef TEAM_H
#define TEAM_H
using namespace std;
#include <iostream>
#include <string>
#include <vector>
#include <memory> // Include pentru referinta unique_ptr
#include "Player.h"

class Team {
private:
    string teamName;
    vector<unique_ptr<Player>> players; // Folosim unique_ptr pentru jucători

public:
    Team(const string& teamName);
    ~Team(); // Destructorul va elibera automat memoriile pentru unique_ptr
    void addPlayer(const string& name, int age, const string& position); // Modificăm metoda să primească parametrii
    
    void displayPlayers() const;
};

#endif // TEAM_H
