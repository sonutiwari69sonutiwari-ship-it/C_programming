#include<stdio.h>
    int main(){
        int a = 30 * 1000 + 2768;
        printf("%d",a);
        return 0;
    }
    // [int a] ke jagah aagar [short a] likhu to answer minus me ayga
    // int vs short
    // int bhi integer ko store kar sakta hain short bhi integer ko store kar sakta bhai
    // lekin fark itna hain ki SHORT ki ek limit hoti hai ki wo -32768 to 32767 tak hi number ko store kar sakta hain.
    // short ke jaise aur bhi kai sare hain hain jaise ->long x , long long x
    // short leta hain 2 bytes
    // 8 bits = 1 byte
    // n bytes me main 2^n bumber store kar sakta hu >> n ites = 2^n numbers


    // int data type --> 4 bytes lega --> 32 bites --> 2^32 numbrs
    //  short ki range hain  -2^15 to (2^15)-1
    // int ki range hain -2^31 to (2^31)-1
    // long long ki range hain -2^63 to (2^63)-1


    // char sirf 1 byte leta hai
    // 1 byte = 8 bits = 2^8 numbers