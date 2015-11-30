#include <stdio.h>

#define KGRN  "\x1B[32m"
#define RESET "\033[0m"


void printBoard(short b[3][3]);
char getChar(int i);
int checkWin(short b[3][3]);
void printWinner(int winRow, short b[3][3]);
int checkWinRow(short b[3][3]);

int main(){
    short board[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    int win = 0;
    int player = 1;

    while(win == 0){
        int x, y;
        printBoard(board); 
        printf("Player %d, choose a row: ", player);
        scanf("%d", &x);
        printf("Player %d, choose a column: ", player);
        scanf("%d", &y);
        printf("\n\n");

        if(x > 0 && x < 4 && y > 0 && y < 4 && board[x - 1][y - 1] == 0){
            board[x - 1][y - 1] = player;
            if(player == 1){
                player = 2;
            } else{
                player = 1;
            }

            win = checkWin(board);

        } else{
            printf("The numbers you entered were invalid. Try again.\n\n");
        }
     }
    
    if(win < 3){
        printWinner(checkWinRow(board), board);
        printf("\n\nPlayer %d has won!\n\n\n", win);
    } else {
        printBoard(board);
        printf("\n\nIts a stalemate! Nobody wins!\n\n\n");
    }

    return 0;
}
void printWinner(int winRow, short b[3][3]){

    if(winRow < 3){
        int x, y;
        printf("  1 2 3\n");
        printf(" -------\n");
        for(y = 0; y < 3; y++){
            printf("%d|", y + 1);
            for(x = 0; x < 3; x++){
                if(y == winRow){
                    printf(KGRN "%c", getChar(b[y][x]));
                    printf(RESET "|");
                }else{
                    printf("%c|", getChar(b[y][x]));
                }
             }
            printf("\n -------\n");
        }   
    }

    if(winRow >= 3 && winRow < 6){
        int x, y;
        printf("  1 2 3\n");
        printf(" -------\n");
        for(y = 0; y < 3; y++){
            printf("%d|", y + 1);
            for(x = 0; x < 3; x++){
                if(3 -x == winRow){
                    printf(KGRN "%c", getChar(b[y][x]));
                    printf(RESET "|");
                }else{
                    printf("%c|", getChar(b[y][x]));
                }
             }
            printf("\n -------\n");
        }
    }

    if(winRow == 6){
        int x, y;
        printf("  1 2 3\n");
        printf(" -------\n");
        for(y = 0; y < 3; y++){
            printf("%d|", y + 1);
            for(x = 0; x < 3; x++){
                if((x == 0 && y == 0) || (x == 1 && y == 1) || (x == 2 && y == 2)){
                    printf(KGRN "%c", getChar(b[y][x]));
                    printf(RESET "|");
                }else{
                    printf("%c|", getChar(b[y][x]));
                }   
             }
            printf("\n -------\n");
        }

    }

    if(winRow == 7){
        int x, y;
        printf("  1 2 3\n");
        printf(" -------\n");
        for(y = 0; y < 3; y++){
            printf("%d|", y + 1);
            for(x = 0; x < 3; x++){
                if((x == 2 && y == 0) || (x == 1 && y == 1) || (x == 0 && y == 2)){
                    printf(KGRN "%c", getChar(b[y][x]));
                    printf(RESET "|");
                }else{
                    printf("%c|", getChar(b[y][x]));
                }
             }
            printf("\n -------\n");
        }

    }


}
                                //Returns number based on position of winning 3 in a row
int checkWinRow(short b[3][3]){ // 63457
                                // 0xxx
    int x, y;                   // 1xxx
                                // 2xxx
    for(y = 0; y < 3; y++){     
        if(b[y][0] == b[y][1] && b[y][0] == b[y][2] && b[y][0] != 0){
            return y; 
        }
    }
    for(x = 0; x < 3; x++){
        if(b[0][x] == b[1][x] && b[0][x] == b[2][x] && b[0][x] != 0){
            return x + 3;
        }
    }
    if(b[0][0] == b[1][1] && b[0][0] == b[2][2] && b[0][0] != 0){
        return 6;
    }
    if(b[0][2] == b[1][1] && b[0][2] == b[2][0] && b[0][2] != 0){
        return 7;
    }
    


}
int checkWin(short b[3][3]){//Return number of winning player, 0 if no winner, 3 if stalemate

    int x, y;
    int count = 0;

    for(y = 0; y < 3; y++){
        if(b[y][0] == b[y][1] && b[y][0] == b[y][2] && b[y][0] != 0){
            return b[y][0];
        }
    }
    for(x = 0; x < 3; x++){
        if(b[0][x] == b[1][x] && b[0][x] == b[2][x] && b[0][x] != 0){
            return b[0][x];
        }
    }
    if(b[0][0] == b[1][1] && b[0][0] == b[2][2] && b[0][0] != 0){
        return b[0][0];
    }
    if(b[0][2] == b[1][1] && b[0][2] == b[2][0] && b[0][2] != 0){
        return b[0][2];
    }
    for(y = 0; y < 3; y++){
        for(x = 0; x < 3; x++){
            if(b[y][x] != 0){
                count++;
            }
        }
    }
    if(count == 9){
        return 3;
    }
    return 0;

}

void printBoard(short b[3][3]){

    int x, y;
    printf("  1 2 3\n");
    printf(" -------\n");
    for(y = 0; y < 3; y++){
        printf("%d|", y + 1);
        for(x = 0; x < 3; x++){
            printf("%c|", getChar(b[y][x]));
        }
        printf("\n -------\n");
    }
}

char getChar(int i){

    switch(i){
        case 0:
            return ' ';
        case 1:
            return 'X';
        case 2:
            return 'O';
        default:
            return ' ';
    }
}
