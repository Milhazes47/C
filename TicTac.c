#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


bool hasMovesLeft(char board[3][3]){

    for (int i=0;i<3;i++){
        for (int k=0;k<3;k++){
            if(board[i][k]=="_"){
                return 1;
            }
        }
    }
    return 0;

}


int hasWon(char board[3][3],char player){

    for (int row=0;row<3; row++){
        if(board[row][0]==board[row][1] && board[row][2]){
            if(player=="x"){
                return 10;
            }else if(player="o"){
                return -10;
            }
        }

    }

    for (int col=0;col<3; col++){
        if(board[0][col]==board[1][col] && board[col][2]){
            if(player=="x"){
                return 10;
            }else if(player="o"){
                return -10;
            }
        }

    }
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]){
        if(player=="x"){
            return 10;
        }else if(player=="o"){
            return -10;
        }
    }
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]){
        if(player=="x"){
            return 10;
        }else if(player=="o"){
            return -10;
        }
    }
    return 0;
}












int main(){
    srand(time(NULL));
    int floor[9]={1,2,3,4,5,6,7,8,9};
    int removed[8]={};
    for (int i=0;i<5;i++){

        int ran=rand()%9;
        removed[i]=floor[ran];
        

    }
   
    for(int k=0;k<3;k++){
        int ran=rand()%9;
        printf("|X X X|\n");

    }



}

