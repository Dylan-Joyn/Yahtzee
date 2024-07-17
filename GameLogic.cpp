#include "GameLogic.h"
using namespace std;

GameLogic::GameLogic() : dice(5), scores(6, -1) {}

void GameLogic::rollDice(const vector<bool>& reroll) {
    for (size_t i = 0; i < dice.size(); ++i) {
        if (reroll[i]) {
            dice[i].roll();
        }
    }
}

vector<Die> GameLogic::getDice() const {
    return dice;
}

void GameLogic::scoreCategory(int category) {
    if (category < 1 || category > 6 || scores[category - 1] != -1) {
        return;
    }
    int score = 0;
    for (const auto& die : dice) {
        if (die.getFaceValue() == category) {
            score += category;
        }
    }
    scores[category - 1] = score;
}

int GameLogic::getTotalScore() const {
    int totalScore = 0;
    for (const auto& score : scores) {
        if (score != -1) {
            totalScore += score;
        }
    }
    return totalScore;
}

bool GameLogic::allCategoriesScored() const {
    for (const auto& score : scores) {
        if (score == -1) {
            return false;
        }
    }
    return true;
}
