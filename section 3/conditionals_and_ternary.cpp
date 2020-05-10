#include <iostream>
#include <string>
using namespace std;

int main(){
    int rating;

    cout << "Rate this program between 1 to 5 : ";
    cin >> rating;

    if(rating == 5){
        puts("5 star rated.");
    }
    else if(rating == 4){
        puts("4 star rated.");
    }
    else if(rating == 3){
        puts("3 star rated.");
    }
    else if(rating == 2){
        puts("2 star rated.");
    }
    else if(rating == 1){
        puts("1 star rated.");
    }
    else{
        puts("Please choose any one from 1 to 5");
    }



    int str;
    cout << "Choose any one of 0 / 1 : ";

    cin >> str;

    int result = str ? 1 : 0 ; // using ternary operator
    printf("You chose : %d \n", result);


    return 0;
}