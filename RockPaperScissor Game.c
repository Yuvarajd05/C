
#include <stdio.h>

int main() {
    char p1,p2;
    
    printf("Enter Choice Player 1 & 2: ");
    scanf("%c %c",&p1,&p2);
    
    if(p1=='R' && p2=='P'){
        printf("Player 2 Wins");
    }
    if(p1=='P' && p2=='S'){
        printf("Player 2 Wins");
    }
    if(p1=='S' && p2=='R'){
        printf("Player 2 Wins");
    }
    if(p1=='R' && p2=='S'){
        printf("Player 1 Wins");
    }
    if(p1=='P' && p2=='R'){
        printf("Player 1 Wins");
    }
    if(p1=='S' && p2=='P'){
        printf("Player 1 Wins");
    }
    if(p1=='R' && p2=='R'){
        printf("Tie");
    }
    if(p1=='P' && p2=='P'){
        printf("Tie");
    }
    if(p1=='S' && p2=='S'){
        printf("Tie");
    }
}