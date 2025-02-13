#include<stdio.h>

int main() {
    // Segregation of Array
    int a[6]={0,1,1,0,1,0};
    int b[6];
    int k=0,i=0,j=5;
    
    while(i<j){
        if(a[k]==0){
            b[i]=a[k];
            k++;
            i++;
        }else if(a[k]==1){
            b[j]=a[k];
            k++;
            j--;
        }
    }
    printf("\nInitial Array: ");
    for(int u=0;u<6;u++){
        printf("%d",a[u]);
    }
    printf("\nSegregated Array: ");
    for(int u=0;u<6;u++){
        printf("%d",b[u]);
    }

return 0;
}

