// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Water Bill
    int hr,cost;
    printf("Enter the hr of parking");
    scanf("%d",&hr);
    
    if(hr<=2){
        cost= hr*20;
    }
    else if(2<hr<=5){
        cost=(2*20)+(hr-2)*30;
    }
    else if(hr>5){
        cost=(2*20)+(3*30)+(hr-5)*50;
    }
    printf("\n");
    if(cost>300){
        cost=cost-(cost*0.1);
    }
    printf("The Total Bill: %d",cost);

return 0;
}