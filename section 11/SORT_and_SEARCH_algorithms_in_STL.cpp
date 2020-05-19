#include <iostream>
// #include <bits/stdc++.h>   // this header also works fine while using "sort()".
#include <algorithm>
using namespace std;


int main(){

    float numbers[6] = {3.3, 2.5, 6.2, 4.6, 7.4, 9.7};

    cout << "Unsorted value : " << endl;
    for(float n : numbers){
        cout << n << " ";
    }
    cout << endl << endl;

    sort(numbers, numbers+6); // this "sort()" has generic implementation, so it doesn't matter what values are given as input

    if(binary_search(numbers, numbers+6, 2.5)){
        cout << "Number found" << endl;
    }
    else{
        cout << "Number not found" << endl;
    }
    cout << endl;

    cout << "Sorted value : " << endl;
    for(float n : numbers){
        cout << n << " ";
    }
    cout << endl;

    return 0;
}