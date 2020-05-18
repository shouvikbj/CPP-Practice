#include <iostream>
#include <string>
using namespace std;

class One{
    public:
        virtual void intro(){
            cout << "I am One" << endl;
        }
    // if a virtual function doesn't have a body, it is called pure virtual function.

        void intro2(){
            cout << "I am intro from class One." << endl;
        }
};

class Two : public One{
    public:
        void intro(){
            cout << "I am Two." << endl;
        }
};

class Three : public One{
    public:
        void intro(){
            cout << "I am Three." << endl;
        }
};

int main(){

    One a;
    Two b;
    Three c;

    a.intro();
    a.intro2();
    b.intro();
    b.intro2();
    c.intro();
    c.intro2();

    cout << endl;
    cout << "After using pointers." << endl;
    cout << endl;

    One *d;
    Two e;
    Three f;

    d = &e;
    d -> intro(); // in order to use pointers we have to make the method in the base class a virtual method.

    d = &f;
    d -> intro(); // in order to use pointers we have to make the method in the base class a virtual method.

    return 0;
}