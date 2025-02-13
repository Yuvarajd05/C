#include <stdio.h>

int main() {
    int r=5,c=5,count=0;
    int arr[5][5] = {
        {1,0,1,0,1},
        {1,0,1,0,1},
        {1,0,1,0,1},
        {1,0,1,0,1},
        {1,0,1,0,1},
    };
    // Count the number of zeros 
    for (int i=0; i<r; i++) {
        for (int j=0; j<c; j++) {
            if (arr[i][j] == 0) {
                count++;
            }
        }
    }
    //first fill with 0s, then with 1s
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if(count>0){
                arr[i][j]=0;
                count--;
            } 
            else{
                arr[i][j]=1;     //fill 1's once 0's are 
            }
        }
    }
    printf("Segregated Array:\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
return 0;
}