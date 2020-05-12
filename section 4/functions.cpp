#include <iostream>
#include <string>
using namespace std;

// various ways in which functions can be implemented

string sayHello();
int sayTwo();
void sayThree(){
    cout << "saying " << 3 << endl;
}

int main(){

    string str = sayHello();
    cout << str << endl;

    int num = sayTwo();
    cout << "saying " << num << endl;

    sayThree();

    return 0;
}


string sayHello(){
    return "Hello !"; 
}

int sayTwo(){
    return 2;
}
