#include<stdio.h>

int main() {
    // Segregation of Array
    int a[6]={0,1,1,0,1,0};
    int i=0,j=5;
    int temp=0, n=6;
    printf("The intial array is ");
    for(int i=0;i<6;i++){
        printf("%d",a[i]);
    }
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<=n;j++){
        if(a[i]==1 && a[j]==0){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    }
}
printf("\n Array after sorting is ");
for(int i=0;i<6;i++){
    printf("%d",a[i]);
}
return 0;
}