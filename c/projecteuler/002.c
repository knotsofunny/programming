#include <stdio.h>

int main(){

    int a = 1;
    int b = 1;
    int max = 4000000;
    int answer = 0;
    while( a + b < max){
        a += b;
        if(a % 2 == 0 && a < max){
            answer += a;
        }
        b += a;
        if(b % 2 == 0 && b < max){
            answer += b;
        }
    }
    printf("%d\n", answer);
    return 0;
}
