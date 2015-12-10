#include <stdio.h>

int main(){

    int answer = 1;
    for(int i = 1; i < 501; i++){
        answer+= (16 * i * i) + (4 * i) + 4; // Why use brute force when you can use MATH
    }
    printf("%d\n", answer);
}
