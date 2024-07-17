#pragma once
#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <vector>
#include "Die.h"

using namespace std;

class GameLogic {
private:
    vector<Die> dice;
    vector<int> scores;
public:
    GameLogic();
    void rollDice(const vector<bool>& reroll);
    vector<Die> getDice() const;
    void scoreCategory(int category);
    int getTotalScore() const;
    bool allCategoriesScored() const;
};

#endif
