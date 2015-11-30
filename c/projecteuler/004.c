#include <stdio.h>
#include <stdlib.h>
int palTest(int num);


int main(){
    int x;
    int y;
    int answer = 0;
    for(x = 100; x < 1000; x++){
        for(y = 100; y <= x; y++){//Only go up to x to keep from repeating numbers

            int product = x * y;
            if(palTest(product) == 1 && product > answer){
                answer = product;
            }

        }
    }
    printf("%d\n", answer);
    return 0;
}

int palTest(int num){
    
    int offset;

    char string[7];
    sprintf(string, "%d", num);//Converts integer to char array
    
    if(num < 100000){
        offset = 4;//Checks 5 charaters if the num is 5 digits
    } else {
        offset = 5;//Checks 6 chars if the string is 6 digits
    }

    for(int i = 0; i < (offset / 2) + 1; i++){//Only check first half against second half
        if(string[i] != string[offset - i]){  //No need to go all the way through string
            return 0;
        }
    }
    return 1;
}
