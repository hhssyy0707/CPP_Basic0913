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
        cout << "��� �ڵ������� : ";
        PrintYear();
    }
    Vehicle() {
    }
    ~Vehicle() {
        cout << "�ڵ��� Ȯ��" << endl;
    }
};