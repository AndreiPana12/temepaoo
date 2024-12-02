#include <mutex> // Add this header for std::mutex
#include <vector>
#include <memory>
#include "Player.h"
using namespace std;
class Team {
private:
    unique_ptr<string> teamName;
    vector<unique_ptr<Player>> players; // Players stored as unique pointers
    mutable mutex mtx; // Mutex to protect access to players and teamName

public:
    Team(const string& teamName);
    Team(Team&& other) noexcept;
    ~Team();

    void addPlayer(const Player& player);
    void displayPlayers() const;

    string getTeamName() const { 
        lock_guard<mutex> lock(mtx); // Protect access to teamName
        return *teamName; 
    }
};
