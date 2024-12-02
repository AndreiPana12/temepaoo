// src/main.cpp
#include <iostream>
#include "Team.h"
#include "Goalkeeper.h"
int main() {
     // Creăm o echipă
    Team team("Steaua");
   
    // Creăm câțiva jucători
    Player player1("Denis Alibec", 33, "Atacant");
    Player player2("Denis Man", 26, "Mijlocaș");
    Goalkeeper goalkeeper("Manuel Neuer", 38, "Portar", 3);


    // Adăugăm jucători în echipă folosind obiectele Player
    team.addPlayer(player1);
    team.addPlayer(player2);
    team.addPlayer(goalkeeper);

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
//SUPRESS METODELE MOVE SI copy constructor