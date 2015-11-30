#include <stdio.h>

int main(){

    int i;
    int sumSquare = 0;
    int squareSum = 0;
    int answer;
    for(i = 1; i < 101; i++){
        sumSquare += i * i;
    }
    for(i = 1; i <101; i++){
        squareSum += i;
    }
    squareSum = squareSum * squareSum;
    answer = squareSum - sumSquare;

    printf("%d\n", answer);
    return 0;
}
