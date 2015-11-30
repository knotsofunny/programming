#include <stdio.h>
#include <math.h>

int primeCheck(int num, int acc);
int rand();

int main(){

    int count = 0;
    int i;

    for(i = 1; count <= 10001; i++){
        if(primeCheck(i, 3) == 1){    
        count++;
        printf("%d  |  %d\n", i, count);
        }
    }
    printf("%s\n", i);
    return 0;
}

int primeCheck(int num, int acc){

    if(num <= 1){
        return 0;
    }
    if(num <= 3){
        return 1;
    }

    int ran = (rand() % 10) + 2;

    for(int i = 0; i < acc; i++){
        if( (int)pow(ran, num - 1) % num != 1 && i != num){
        return 0;
        }
    }
    return 1;

}
