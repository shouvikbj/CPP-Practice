#include <iostream>
#include <cstdint>
using namespace std;

int main(){
    printf("Size of Short Integer is : %ld bits. \n", sizeof(short int) * 8);
    printf("Size of Integer is : %ld bits. \n", sizeof(int) * 8);
    printf("Size of Long Integer is : %ld bits. \n", sizeof(long int) * 8);
    printf("Size of Long Long Integer is : %ld bits. \n", sizeof(long long int) * 8);
    printf("\n");

    printf("Size of Integer_8 is : %ld bits. \n", sizeof(int8_t) * 8);
    printf("Size of Integer_16 is : %ld bits. \n", sizeof(int16_t) * 8);
    printf("Size of Integer_32 is : %ld bits. \n", sizeof(int32_t) * 8);
    printf("Size of Integer_64 is : %ld bits. \n", sizeof(int64_t) * 8);
    printf("\n");

    printf("Size of Unsigned_Integer_8 is : %ld bits. \n", sizeof(uint8_t) * 8);
    printf("Size of Unsigned_Integer_16 is : %ld bits. \n", sizeof(uint16_t) * 8);
    printf("Size of Unsigned_Integer_32 is : %ld bits. \n", sizeof(uint32_t) * 8);
    printf("Size of Unsigned_Integer_64 is : %ld bits. \n", sizeof(uint64_t) * 8);
    printf("\n");

    printf("Size of Char is : %ld bits. \n", sizeof(char) * 8);
    printf("\n");


    // some basic conversions

    int fun_int = 22;
    printf("Decimal value of fun_int = 22 is : %d\n", fun_int);

    int fun_hex = 0x16;
    printf("Decimal value of fun_hex = 0x16 is : %d\n", fun_hex);

    int fun_binary = 0b00010110;
    printf("Decimal value of fun_binary = 0b00010110 is : %d\n", fun_binary);
    printf("\n");



    return 0;
}