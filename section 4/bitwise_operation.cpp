#include <iostream>
using namespace std;

int main(){

    unsigned int x = 6;
    unsigned int y = 7;

    unsigned int z = x & y;
    cout << "Value of z is : " << z << endl;
    z = x | y;
    cout << "Value of z is : " << z << endl;
    z = x ^ y;
    cout << "Value of z is : " << z << endl;
    z = ~ x;
    cout << "Value of z is : " << z << endl;
    z = y << 1;
    cout << "Value of z is : " << z << endl;
    z = y >> 1;
    cout << "Value of z is : " << z << endl;

    return 0;
}