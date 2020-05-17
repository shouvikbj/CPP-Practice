#include <iostream>
#include <string>
using namespace std;

class Phone{
    string _name = "";
    string _os = "";
    int _price = 0;
    // by moving the default constructor in the private area, the default constructor is being inaccessible to the program.
    // this process is called disabling the default constructor.
    Phone(); // default constructor
    public:
        // Phone(); // default constructor
        Phone(const string &name, const string &os, const int &price); // parameterized constructor
        Phone(const Phone &); // copy constructor
        // getter
        string getOs(){
            printf("Value inside getOs is %p \n", this); 
            // "this" keyword is a self referrencial pointer, it alwasy points to the object which is bound with it.
            return _os;
        }
        int getPrice();
        // setter
        void setName(string name){
            _name = name;
        }

        ~Phone(); // destructor
};

int Phone::getPrice(){
    printf("Value inside getPrice is %p \n", this);
    return _price;
}

Phone::Phone() : _name(), _os("Samsung OS"), _price(){
    puts("Default constructor");
}

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price){
    puts("This is parameterized constrcutor.");
}

Phone::Phone(const Phone &values){
    puts("Overwrite copy constructor");
    _name = values._name;
    _os = "skinned " + values._os;
    _price = values._price;
}

Phone::~Phone(){
    printf("Destructor called for %s\n", _name.c_str());
}

int main(){

    // Phone samsungA1;
    // samsungA1.setName("Samsung A1");
    // cout << samsungA1.getOs() << endl;

    Phone OnePlus8("OnePlus 8", "Android-Oxygen", 799);
    cout << OnePlus8.getOs() << endl;

    printf("Value of object is %p \n", &OnePlus8);
    cout << OnePlus8.getPrice() << endl;

    Phone OnePlus8S = OnePlus8;
    cout << OnePlus8S.getOs() << endl;

    return 0;
}