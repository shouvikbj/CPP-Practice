#include <iostream>
using namespace std;

int getTwo(){
    return 2;
}

void interesting(){
    puts("I am interesting.");
}

int main(){

    int whatIgot = getTwo();
    cout << whatIgot << endl;

    // pointer to a function
    void (*pointsToInteresting)() = interesting;
    pointsToInteresting();
    (*pointsToInteresting)();

    return 0;
}