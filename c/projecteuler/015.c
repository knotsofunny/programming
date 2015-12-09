#include <stdio.h>

int main(){

    long long int array[20][20];
    for(int i = 0; i < 20; i++){
        array[i][0] =  i + 2;
        array[0][i] =  i + 2;
    }

    for(int x = 1; x < 20; x++){
        for(int y = 1; y < 20; y++){
            array[x][y] = array[x - 1][y] + array[x][y - 1];
        }
    }
    printf("%lli\n%lli\n", array[15][15], array[16][16]);
    printf("%lli\n", array[19][19]);

    return 0;
}
