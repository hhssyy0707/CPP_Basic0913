#pragma once
#include "Io.h"

class Animal {
private:
    int Finger;
    int Leg;

public:
    Animal();
    void PrintFinger();
    void PrintLeg();

    ~Animal() {
        cout << "Animal Distructor 동물 확인" << endl;
    }
};