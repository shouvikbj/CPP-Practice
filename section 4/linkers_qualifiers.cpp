#include <iostream>
using namespace std;

static int life = 3;

int lifeUp(int life){
    return ++life;
}

int lifeDown(int life){
    return --life;
}

int main(){

    // int life = 3;
    cout << "Your starting game life is : " << life << endl;

    life = lifeUp(life);
    cout << "Your increased game life is : " << life << endl;

    life = lifeUp(life);
    cout << "Your increased game life is : " << life << endl;

    life = lifeDown(life);
    cout << "Your decreased game life is : " << life << endl;

    return 0;
}