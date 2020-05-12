#include <iostream>
using namespace std;

int main(){

    // bool isSignedIn = true;
    bool isFbUser = false;
    bool isGoogleUser = true;
    bool isAdmin = true;

    // if(isSignedIn && isAdmin){
    //     puts("Welcome Admin.");
    // }
    // else{
    //     puts("No Admin access.");
    // }

    if((isFbUser || isGoogleUser) && isAdmin){
        puts("Welcome Admin");
    }
    else if(isFbUser || isGoogleUser){
        puts("No Admin access.");
        puts("Welcome user.");
    }
    else{
        puts("You are not logged in.");
    }

    return 0;
}