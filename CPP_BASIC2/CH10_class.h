#pragma once

class Car {
    char Name[30];
    char Model[30];
    int Year;
    int Velocity;
    int TireSize;
    char Color[30];

    public:
        Car(int V) {
            Velocity = V;
        }
        void DriveVelocity();
        void DriveTime();

};