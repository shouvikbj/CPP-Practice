#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main(){

    vector<int> myints = {1,2,3,4,5,6,7,8,9,10};

    for(int x : myints){
        cout << x << " ";
    }
    cout << endl;

    // "stable_partition" tries to maintain the order in which the numbers are given.
    stable_partition(myints.begin(), myints.end(), [](auto x){ return x%2==0;});
    for(int x : myints){
        cout << x << " ";
    }
    cout << endl;

    vector<int> myints2 = {1,2,3,4,5,6,7,8,9,10};

    for(int x : myints2){
        cout << x << " ";
    }
    cout << endl;

    // "partition" doesn't try to maintain the order in which the numbers are given.
    partition(myints2.begin(), myints2.end(), [](auto x){ return x%2==0;});
    for(int x : myints2){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}