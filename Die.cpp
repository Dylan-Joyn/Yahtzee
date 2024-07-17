#include "Die.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Die::Die() {
    srand(static_cast<unsigned int>(time(0)));
    roll();
}

void Die::roll() {
    faceValue = rand() % SIDES + 1;
}

int Die::getFaceValue() const {
    return faceValue;
}
