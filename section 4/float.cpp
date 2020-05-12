#include <iostream>
using namespace std;

int main()
{

    printf("Float size is : %ld bits. \n", sizeof(float) * 8);

    float my_p_value = 20.2;
    if (my_p_value == 20.200001)
    {
        puts("You got it right.");
    }
    else
    {
        puts("else block.");
    }
    printf("my_p_value float value : %1.30f \n", my_p_value);

    return 0;
}