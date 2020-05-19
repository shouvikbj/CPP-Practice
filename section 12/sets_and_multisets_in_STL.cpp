#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

class User{
    public:
        string name;
        int score;
        bool operator < (const User &u) const {
            return score < u.score;
        }
        bool operator > (const User &u) const {
            return score > u.score;
        }
};


int main(){

    //// the below are "set" representations
    // set<int, greater<>> myset = {12,13,14,15,14,12};
    // set<int, less<>> myset = {12,13,14,15,14,12};

    //// the below are "multiset" representations
    // multiset<int, greater<>> myset = {12,13,14,15,14,12};
    // multiset<int, less<>> myset = {12,13,14,15,14,12};

    set<int> myset = {12,13,14,15,14,12};


    myset.insert(2);
    myset.insert(3);
    myset.insert(4);
    myset.insert(2);
    myset.insert(6);

    for(auto i=myset.begin(); i!=myset.end(); ++i){
        cout << *i << endl;
    }
    cout << endl;

    for(const auto &v : myset){
        cout << v << " ";
    }
    cout << endl;



    // set<User, greater<>> myUserSet= {{"sam", 200}, {"tim", 22}, {"sam", 200}};
    set<User, less<>> myUserSet= {{"sam", 200}, {"tim", 22}, {"sam", 200}};


    for(const auto &v : myUserSet){
        cout << v.name << " ";
    }
    cout << endl;


    return 0;
}