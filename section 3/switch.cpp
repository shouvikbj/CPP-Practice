#include <iostream>
using namespace std;

int main(){

    int rating;

    cout << "Rate this program between 1 to 5 : ";
    cin >> rating;

    switch (rating){

        case 5:
            printf("%d rated.\n", rating);
            break;
        case 4:
            printf("%d rated.\n", rating);
            break;
        case 3:
            printf("%d rated.\n", rating);
            break;
        case 2:
            printf("%d rated.\n", rating);
            break;
        case 1:
            printf("%d rated.\n", rating);
            break;        
        default:
            printf("Choose any one between 1 to 5 \n");
            break;    
    }


    return 0;
}