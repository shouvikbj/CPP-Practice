#include <iostream>
using namespace std;

int main(){
    int life;
    life = 4;

    int card;
    card = 40;
    int my_card;

    int *myp; // declearing the pointer
    myp = &card; // making the pointer point to the memory location of the variable "card"
    my_card = *myp; // my_card will get the value of the memory location, where "myp" pointer is pointing to

    printf("Value of my_card is : %d \n", my_card);
    printf("Value pointed by myp is : %d \n", *myp);
    printf("Value of card is : %d \n", card);


    return 0;
}

