#include <iostream>

// #define NULL 0

using namespace std;

void printVal(int a){
    cout << "Integer value is : " << a << endl;
}

void printVal(double a){
    cout << "Double value is : " << a << endl;
}

void printVal(int *a){
    cout << "Pointer value is : " << a << endl;
}

int main(){

    printVal(5);
    printVal(5.3);
    // printVal(nullptr); // "nullptr" points to actual "NULL" ( the start of the memory )

    return 0;
}