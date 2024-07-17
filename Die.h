#pragma once
#ifndef DIE_H
#define DIE_H

using namespace std;

class Die {
private:
    int faceValue;
    const int SIDES = 6;
public:
    Die();
    void roll();
    int getFaceValue() const;
};

#endif
