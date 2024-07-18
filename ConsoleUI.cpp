#include "ConsoleUI.h"
#include <iostream>
#include<limits>
#include<sstream>

using namespace std;

void ConsoleUI::gameBootUp() const {
    cout << "This is broken Yahtzee, just keep rolling" << endl;
}

void ConsoleUI::rollPrompt(int rollNumber) const {
    cout << "Roll " << rollNumber << endl;
}

void ConsoleUI::score(int score) const {
    cout << "Current score: " << score << endl;
}

void ConsoleUI::finalScore(int score) const {
    cout << "Final score: " << score << endl;
}

void ConsoleUI::dice(const vector<Die>& dice) const {
    cout << "Dice: ";
    for (const auto& die : dice) {
        cout << die.getFaceValue() << " ";
    }
    cout << endl;
}

int ConsoleUI::chooseCategory() const {
    int category;
    cout << "Choose a category to score (ex: 1 for Aces): ";
    cin >> category;
    return category;
}
void ConsoleUI::getDiceToReroll(vector<bool>& reroll) const {
    for (size_t i = 0; i < reroll.size(); ++i) {
        reroll[i] = false;
    }
    cout << "Enter the dice to reroll (ex: 1 2 3): ";
    string input;
    getline(cin, input);
    istringstream iss(input);
    int index;
    while (iss >> index) {
        if (index >= 1 && index <= 5) {
            reroll[index - 1] = true;
        }
    }
}



