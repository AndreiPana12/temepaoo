// Team.h

#ifndef TEAM_H
#define TEAM_H

#include <iostream>
#include <string>
#include <vector>
#include <memory> // Include pentru unique_ptr
#include "Player.h"
using namespace std;
class Team {
private:
    string* teamName;
    vector<unique_ptr<Player>> players; // Folosim unique_ptr pentru jucători

public:
    Team(const string& teamName);
    
    Team(Team&& other) noexcept;

    ~Team(); // Destructorul va elibera automat memoriile pentru unique_ptr

    // Metodele de manipulare a jucătorilor
    void addPlayer(const Player& player);
    void displayPlayers() const;

    // Alte metode
    string getTeamName() const { return *teamName; }
};

#endif // TEAM_H
