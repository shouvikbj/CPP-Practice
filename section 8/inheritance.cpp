#include <iostream>
#include <string>
using namespace std;

class Money{
    protected:
        void fullName(){}
    public:
        void gotMoney(){
            puts("Got 5K USD in my account.");
        }
};

class Man{
    string _name;
    int _age;
    Man(){};

    friend class Superman;
    // the above line will expose all private datas of the "Man" class to the "Superman" class.
    // not at all a good practice. So, using "friend" is not recomended at all.

    protected:
        Man(const string &name, const int &age) : _name(name), _age(age){}

        void run(){
            puts("I can run");
        }

        int getAge(){
            return _age;
        }
    public:
        void sayName() const;
};

void Man::sayName() const {
    cout << "My name is : " << _name << " and age is : " << _age << endl;
}

// superman class
class Superman : public Man{
    bool flight;
    public:
        Superman(string name) : Man(name, 26){}
        void run(){
            printf("I can run at light speed. %d\n", _age); 
            // here "_age" is accessible because "Superman" class is friend class of "Man" class.
        }
};

// spiderman class
class Spiderman : public Man, public Money{
    bool webbing;
    public:
        Spiderman(string name) : Man(name, 19){}
        void run(){
            puts("I can run at normal speed.");
        }
        void fullName(){
            puts("My name is Peter Parker.");
        }
};




int main(){

    Superman clark("kent");
    clark.sayName();
    clark.run();

    Spiderman peter("parker");
    peter.sayName();
    peter.run();
    peter.gotMoney();
    peter.fullName();

    return 0;
}