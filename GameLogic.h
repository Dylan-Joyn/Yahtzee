#pragma once
#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <vector>
#include "Die.h"

using namespace std;

class GameLogic {
private:
    vector<Die> dice;
    vector<bool> categoriesScored;
    int totalScore;

public:
    GameLogic();
    void rollDice(const vector<bool>& reroll);
    const vector<Die>& getDice() const;
    void scoreCategory(int category);
    bool allCategoriesScored() const;
    int getTotalScore() const;
};

#endif
