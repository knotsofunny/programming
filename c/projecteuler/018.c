#include <stdio.h>

int sum(int x, int y, int array[15][15]);

int main(){

  int array[15][15]={{75,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                     {95, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//None of these zeros were needed
                     {17, 47, 82,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                     {18, 35, 87, 10,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},//none of them
                     {20,  4, 82, 47, 65,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0},
                     {19,  1, 23, 75,  3, 34,  0,  0,  0,  0,  0,  0,  0,  0,  0},//not a single one
                     {88,  2, 77, 73,  7, 63, 67,  0,  0,  0,  0,  0,  0,  0,  0},
                     {99, 65,  4, 28,  6, 16, 70, 92,  0,  0,  0,  0,  0,  0,  0},
                     {41, 41, 26, 56, 83, 40, 80, 70, 33,  0,  0,  0,  0,  0,  0},
                     {41, 48, 72, 33, 47, 32, 37, 16, 94, 29,  0,  0,  0,  0,  0},
                     {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14,  0,  0,  0,  0},
                     {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57,  0,  0,  0}, 
                     {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48,  0,  0},  
                     {63, 66,  4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31,  0},//not even this one
                     { 4, 62, 98, 27, 23,  9, 70, 98, 73, 93, 38, 53, 60,  4, 23}};

    printf("%d\n", sum(0,0,array));

    return 0;
}

int sum(int x, int y, int array[15][15]){
    if(array[y][x] == 0){
        return 0;
    }

    if(y == 14){                            //Checks if at the bottom of the array
        if(array[y][x] > array[y][x + 1]){  //returns the bigger number
            return array[y][x];
        } else{
            return array[y][x + 1];
        }
    }
    int left = array[y][x] + sum(x, y + 1, array);
    int right = array[y][x] + sum(x + 1, y + 1, array);

    if(left > right){
        return left;
    } else{
        return right;
    }

}
