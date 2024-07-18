// Yahtzee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ConsoleUI.h"
#include "GameLogic.h"

using namespace std;

int main() {
    ConsoleUI console;
    GameLogic game;

    console.gameBootUp();

    while (!game.allCategoriesScored()) {
        for (int roll = 1; roll <= 3; ++roll) {
            console.rollPrompt(roll);
            if (roll > 1) {
                vector<bool> reroll(5, false);
                console.getDiceToReroll(reroll);
                game.rollDice(reroll);
            }
            else {
                vector<bool> reroll(5, true);
                game.rollDice(reroll);
            }
            console.dice(game.getDice());
        }
    }
}

