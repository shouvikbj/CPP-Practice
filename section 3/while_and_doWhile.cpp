#include <iostream>
using namespace std;

int main(){

    // //// while loop
    // int num = 0;
    // while (num < 5)
    // {
    //     puts("inside while loop");
    //     printf("%d \n", num);
    //     num++;
    // }
    

    // //// do-while loop
    // int num1 = 0;
    // do
    // {
    //     puts("inside do-while loop");
    //     printf("%d \n", num1);
    //     num1++;
    // } while (num1 < 5);

    int my_numbers[] = {4,5,6,7,8,9,0};

    int i = 0;
    int j = 0;

    cout << "entering while loop" << endl;
    while(i<7){
        if(i == 3){
            i++;
            cout << "skiping this one" << endl;
            // break;
            continue;
        }
        cout << "Current number is : " << my_numbers[i] << endl;
        i++;
    }
    
    cout << "entering do-while loop" << endl;
    do{
        cout << "Current number is : " << my_numbers[j] << endl;
        j++;
    }while(j<7);



    return 0;
}