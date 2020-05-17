#include <iostream>
#include <string>
using namespace std;

class User{
    int _secret = 22;
    public:
        string name = "default";
        void classMsg();

        void setSecret(const int &newsecret){
            _secret = newsecret;
        }

        int getSecret() const;
};

void User::classMsg(){
    cout << "Class is great, " << name << endl;
}

int User::getSecret() const {
    return _secret;
}


int main(){

    User sam;
    sam.name = "Sam";
    sam.classMsg();
    sam.setSecret(333);
    cout << "Secret of Sam is : " << sam.getSecret() << endl;

    User shouvik;
    shouvik.classMsg(); // this will print the default message
    shouvik.name = "Shouvik";
    shouvik.classMsg(); // this will print the updated message

    const User rock;
    cout << rock.getSecret() << endl;

    User peter = sam;
    cout << peter.getSecret() << endl;
    cout << peter.name << endl;

    return 0;
}