#ifndef GOALKEEPER_H
#define GOALKEEPER_H

#include "Player.h"

class Goalkeeper : public Player {
private:
    int cleanSheets; // Numărul de meciuri fără gol primit

public:
    // Constructor parametrizat
    Goalkeeper(const string& name, int age, const string& position, int cleanSheets);

    // Metodă specifică clasei Goalkeeper
    int getCleanSheets() const;

    // Suprascrierea metodei de afișare (polimorfism)
    string getPosition() const override; // Specifică poziția și clean sheets

    // Destructor
    ~Goalkeeper();
};

#endif // GOALKEEPER_H
