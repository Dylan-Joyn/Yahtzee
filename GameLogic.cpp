#include "GameLogic.h"
using namespace std;

GameLogic::GameLogic() : dice(5), categoriesScored(6, false), totalScore(0) {
    for (auto& die : dice) {
        die.roll();
    }
}

void GameLogic::rollDice(const vector<bool>& reroll) {
    for (size_t i = 0; i < dice.size(); ++i) {
        if (reroll[i]) {
            dice[i].roll();
        }
    }
}

const vector<Die>& GameLogic::getDice() const {
    return dice;
}

void GameLogic::scoreCategory(int category) {

    int categoryScore = 0;
    for (const auto& die : dice) {
        if (die.getFaceValue() == category) {
            categoryScore += category;
        }
    }
}

int GameLogic::getTotalScore() const {
    return totalScore;
}

bool GameLogic::allCategoriesScored() const {
    for (bool scored : categoriesScored) {
        if (!scored) {
            return false;
        }
    }
    return true;
}
