#pragma once
#ifndef CONSOLEUI_H
#define CONSOLEUI_H

#include <vector>
#include "Die.h"

using namespace std;

class ConsoleUI {
public:
    void gameBootUp() const;
    void dice(const vector<Die>& dice) const;
    void getDiceToReroll(vector<bool>& reroll) const;
    void rollPrompt(int rollNumber) const;
    void score(int score) const;
    int chooseCategory() const;
    void finalScore(int score) const;
};

#endif
