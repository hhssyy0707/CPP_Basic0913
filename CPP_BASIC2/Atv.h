#pragma once
#include "Bike.h"

class Atv : public Bike {
private:
    int year = 2022;

public:
    void PrintPrice();
    void Print();
};