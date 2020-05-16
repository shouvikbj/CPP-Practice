#include <iostream>
// #include "adder.h"
// #include "lifeup.h"

using namespace std;

// template
template<typename T>
T addMe(T a, T b){
    return a+b;
}



// main method

int main(){

    // int life  =3;

    // lifeUp(life);
    // cout << life << endl;

    // life = actualLifeUp(life);
    // cout << life << endl;

    // lifeUpUsingPointer(&life);
    // cout << life << endl;

    // lifeUpUsingReference(life);
    // cout << life << endl;


    int a = 5;
    int b = 4;
    float c = 5.6;
    float d = 7.5;

    cout << addMe(a,b) << endl;
    cout << addMe(c,d) << endl;



    return 0;
}


