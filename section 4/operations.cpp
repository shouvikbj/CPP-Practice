#include <iostream>
using namespace std;

int main(){

    int life = 3;
    int points = 4;

    static int score = 2;

    score = points + life;
    cout << "score : " << score << endl;
    score = points - life;
    cout << "score : " << score << endl;
    score = points * life;
    cout << "score : " << score << endl;
    score = points / life;
    cout << "score : " << score << endl;
    score = points % life;
    cout << "score : " << score << endl;
    score += points;
    cout << "score : " << score << endl;
    score -= points;
    cout << "score : " << score << endl;
    score *= points;
    cout << "score : " << score << endl;
    score /= points;
    cout << "score : " << score << endl;
    score %= points;
    cout << "score : " << score << endl;


    return 0;
}