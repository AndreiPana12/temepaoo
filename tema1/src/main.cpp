// src/main.cpp
#include "Team.h"

int main() {
    // Creăm o echipă
    Team team("Steaua");

    // Creăm câțiva jucători
    Player player1("Denis Alibec", 33, "Atacant");
    Player player2("Denis Man", 26, "Mijlocaș");
    Player player3("Manuel Neuer", 38, "Portar");

    // Adăugăm jucători în echipă
    team.addPlayer("Denis Alibec", 33, "Atacant");
    team.addPlayer("Denis Man", 26, "Mijlocaș");
    team.addPlayer("Manuel Neuer", 38, "Portar");

    // Afișăm jucătorii din echipă
    team.displayPlayers();
    
    // Folosim operatorii < și >
    if (player1 > player2) {
        cout << player1.getName() << " este mai în vârstă decât " << player2.getName() << endl;
    } else {
        cout << player2.getName() << " este mai în vârstă decât " << player1.getName() << endl;
    }

    return 0;
}
