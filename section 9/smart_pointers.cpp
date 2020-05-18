#include <iostream>
#include <string>
#include <memory>
using namespace std;

class User{
    public:
        User(){
            cout << "User created." << endl;
        }
        ~User(){
            cout << "User destroyed." << endl;
        }

        void testFunc(){
            cout << "I am a test function." << endl;
        }
};


int main(){

    {
        // unique_ptr<User> sam(new User()); // not a favourite way of developers.
        unique_ptr<User> sam = make_unique<User>();
        sam -> testFunc();

        // unique_ptr<User> samm = sam; // this is NOT ALLOWED.
    }

    {
        shared_ptr<User> tim = make_shared<User>();
        shared_ptr<User> timm = tim; // both the pointers are pointing to the same memory location.
        tim -> testFunc();
        timm -> testFunc();

        weak_ptr<User> wtim = tim; // this is an weak pointer. 
                                   // CPP doesn't keep count or track of these type of pointers automatically.
                                   // weak_pointers are only there to point to an already existing Object or memory location.
    }

    cout << "Outside of the scope." << endl;

    return 0;
}