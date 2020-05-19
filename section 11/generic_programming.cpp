#include <iostream>
using namespace std;

template <typename T>
T getBigger(T a, T b){
    return ((a>b) ? a : b);
}

int main(){

    cout << getBigger(3,5) << endl;
    cout << getBigger(8.4,5.5) << endl;
    cout << getBigger('e','b') << endl; // in this case, the ASCII values will be compared

    return 0;
}