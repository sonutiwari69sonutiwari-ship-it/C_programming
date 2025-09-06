#include <stdio.h>

void england(){
    printf("You are in England\n");
    return;
}

void australia(){
    printf("You are in Australia\n");
    england(); //calling  england
    return;
}

void india(){
    printf("You are in India\n");
    australia(); // calling astralia
    return;
}

int main(){
    india(); // calling india
    return 0;
}
// jisko call lagaya ho wo upar kahi bhi ho chalega 
// lekin niche na ho 