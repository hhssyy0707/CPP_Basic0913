#pragma once
#include "Io.h"

class Vehicle {
private:
    int Year;

public:
    int Price;
    void PrintYear();
    void PrintPrice();
    void GetYear();
    void SetYear();
    
    Vehicle(int _Year, int _Price) {
        Year = _Year;
        Price = _Price;
        cout << "출고 자동차연식 : ";
        PrintYear();
    }
    Vehicle() {
    }
    ~Vehicle() {
        cout << "자동차 확인" << endl;
    }
};