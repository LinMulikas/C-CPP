#include <stdio.h>
#include <stdlib.h>

int main(){
    void* ptr = malloc(sizeof(char) * 8);

    for (int i = 0; i < 8; i++){
        *((char*)ptr + i) = i - 100;
        printf("%d", *((char*)ptr + i));
    }
    ptr = (void*)((char*)ptr - 8);

    for (int i = 0; i < 8; i++){
        *((char*)ptr + i) = i - 100;
    }
}