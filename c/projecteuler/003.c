#include <stdio.h>

int main(){

    long long l = 600851475143LL;
    int i;
    for(i = 1; i < l; i++){
        if( l % i == 0){
            l /= i;
            i = 1;
        }
    }
    printf("%d\n", l);
    return 0;
}
