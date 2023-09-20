#include "Animal.h"
#include "Io.h"

Animal::Animal() {
    Finger = 10;
    Leg = 2;

}

Animal::Animal(int _Finger, int _Leg){
    this->Finger = _Finger;
    this->Leg = _Leg;

}


void Animal::PrintFinger() {
    //Finger = _Finger;
    cout << Finger << endl;
}

void Animal::PrintLeg() {
    cout << Leg << endl;
}