#include <iostream>
using namespace std;

struct User{
    const int uId;
    const char *name;
    const char *email;
    int course_count;
};

int main(){

    User baaj = {100, "Shouvik Bajpayee", "email@shouvik.com", 2};
    User piku = {101, "Piku Bajpayee", "email.piku@shouvik.com", 3};

    User *ptr = &baaj;
    ptr->course_count = 10;

    cout << baaj.uId << endl;
    cout << baaj.name << endl;
    cout << baaj.email << endl;
    cout << baaj.course_count << endl;

    cout << endl;

    cout << piku.uId << endl;
    cout << piku.name << endl;
    cout << piku.email << endl;
    cout << piku.course_count << endl;
    piku.course_count = 5;
    cout << "Updated course count : " << piku.course_count << endl;

    return 0;
}