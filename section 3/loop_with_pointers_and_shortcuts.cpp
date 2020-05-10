#include <iostream>
using namespace std;

int main(){

    char my_string[] = "shouvik";
    char my_name[] = {'s','h','o','u','v','i','k', 0};
    printf("my_string is : %s \n", my_string);
    printf("my_name is : %s \n", my_name);

    cout << "take a break" << endl;

    for(int i=0; my_name[i]!=0; i++){
        cout << "Character is : " << my_name[i] << endl;
    }

    cout << "take a break again." << endl;

    for(int i:my_string){
        if(i == 0) break;
        printf("Character is : %c\n", i);
    }

    cout << "take a break once again." << endl;

    for(char *cp = my_name; *cp != 0; cp++){
        cout << "Character is : " << *cp << endl;
    }



    return 0;
}