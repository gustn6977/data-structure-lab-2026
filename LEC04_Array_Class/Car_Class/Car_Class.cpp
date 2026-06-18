#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Car.h"

int main() {
    Car myCar;
    myCar.changeGear();
    myCar.speedUp();

    printf("일반 자동차 정보\n");
    myCar.display();
    myCar.whereAmI();
    printf("\n");

    SportsCar mySportsCar(100, "AVENTADOR", 5, false);

    printf("\n스포츠카 정보\n");
    mySportsCar.display();

    mySportsCar.speedUp();
    printf("\n터보 OFF\n");
    mySportsCar.display();

    mySportsCar.setTurbo(true);
    mySportsCar.speedUp();
    printf("\n터보 ON\n");
    mySportsCar.display();
    mySportsCar.whereAmI();

    return 0;
}