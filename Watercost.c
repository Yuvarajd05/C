// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Water Bill
    int l,cost;
    printf("Amount of Water Used(in Litre): ");
    scanf("%d",&l);
    
    if(l<=50){
        cost= l*2;
    }
    else if(50<l<=150){
        cost=(50*2)+(l-50)*5;
    }
    else if(l>150){
        cost= (50*2)+(100*5)+(l-150)*8;
    }
    printf("\n");
    if(cost>800){
        cost =cost+(cost*0.1);
    }
    printf("The Total Bill: %d",cost);

    return 0;
}