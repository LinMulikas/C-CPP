#include <stdio.h>

int (*p)(int, int);

int max_int(int a, int b){
    return a > b ? a : b;
}

int main(){
    printf("%d", (0b11111111 & 0b10000000) >> 7);

    return 0;
}

