#include <iostream>
#include "adder.h"
#include "lifeup.h"

using namespace std;

// function declearations

//// the below functions are moved to the header file

// void lifeUp(int life);
// int actualLifeUp(int life);
// void lifeUpUsingPointer(int* life);
// void lifeUpUsingReference(int &life);
// int addMe(int a, int b);
// float addMe(float a, float b);


// main method

int main(){

    int life  =3;

    lifeUp(life);
    cout << life << endl;

    life = actualLifeUp(life);
    cout << life << endl;

    lifeUpUsingPointer(&life);
    cout << life << endl;

    lifeUpUsingReference(life);
    cout << life << endl;


    int a = 5;
    int b = 4;
    float c = 5.6;
    float d = 7.5;

    cout << addMe(a,b) << endl;
    cout << addMe(c,d) << endl;



    return 0;
}


