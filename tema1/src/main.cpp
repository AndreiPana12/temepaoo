// src/main.cpp
#include <iostream>
#include "Team.h"

int main() {
     // Creăm o echipă
    Team team("Steaua");

    // Creăm câțiva jucători
    Player player1("Denis Alibec", 33, "Atacant");
    Player player2("Denis Man", 26, "Mijlocaș");
    Player player3("Manuel Neuer", 38, "Portar");

    // Adăugăm jucători în echipă folosind obiectele Player
    team.addPlayer(player1);
    team.addPlayer(player2);
    team.addPlayer(player3);

    // Afișăm jucătorii din echipă
    team.displayPlayers(); 
    
    // Folosim operatorii < și >
    if (player1 < player2) {
        cout << player1.getName() << " este mai în vârstă decât " << player2.getName() << endl;
    } else {
        cout << player2.getName() << " este mai în vârstă decât " << player1.getName() << endl;
    }


    Team teammove = move(team);
    teammove.displayPlayers();

    return 0;
}
