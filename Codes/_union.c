#include <stdio.h>

union NUM{
    char bits[8];
    long l;
};

int main(){
    union NUM a;
    a.l = 100;



    for (int i = 0; i < 8; i++){
        printf("", a.bits[i]);
    }
}