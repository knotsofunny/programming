#include <stdio.h>

int main(){

    int a = 2*3*5*7*11*13*17*19;
    int i = 0;
    int found = 0;
    while(!found){
        i += a;
        int x;
        for(x = 2; x <= 20; x++){
            if(i % x != 0){
                found = 0;
                break;
            }else{
                found = 1;
            }
        }
    }
    printf("%d\n", i);
}
